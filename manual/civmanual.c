/**********************************************************************
 Freeciv - Copyright (C) 2004 - The Freeciv Project
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "astring.h"
#include "fciconv.h"
#include "fcintl.h"
#include "log.h"
#include "mem.h"
#include "registry.h"
#include "shared.h"
#include "support.h"

#include "capability.h"
#include "events.h"
#include "game.h"
#include "improvement.h"
#include "map.h"
#include "player.h"
#include "version.h"

#include "helpdata.h"
#include "helpdlg_g.h"

#include "citytools.h"
#include "connecthand.h"
#include "console.h"
#include "diplhand.h"
#include "gamehand.h"
#include "plrhand.h"
#include "report.h"
#include "ruleset.h"
#include "savegame.h"
#include "srv_main.h"

#include "stdinhand.h"
#include "commands.h"
#include "settings.h"

enum manuals {
  MANUAL_SETTINGS,
  MANUAL_COMMANDS,
  MANUAL_TERRAIN,
  MANUAL_BUILDINGS,
  MANUAL_WONDERS,
  MANUAL_COUNT
};

/* This formats the manual for an HTML wiki. */
#ifdef USE_HTML
#define HEADER "<html><head><link rel=\"stylesheet\" type=\"text/css\" "\
               "href=\"manual.css\"/><meta http-equiv=\"Content-Type\" "\
               "content=\"text/html; charset=UTF-8\"/></head><body>\n\n"
#define SECTION_BEGIN "<h3>"
#define SECTION_END "</h3>"
#define IMAGE_BEGIN "<img src=\""
#define IMAGE_END ".png\">"
#define SEPARATOR " "
#define TAIL "</body></html>"
#else
#define HEADER " "
#define SECTION_BEGIN "==="
#define SECTION_END "==="
#define IMAGE_BEGIN "[[Image:"
#define IMAGE_END ".png]]"
#define SEPARATOR "----\n\n"
#define TAIL " "
#endif

/**************************************************************************
  Useless stubs for compiling client code.
**************************************************************************/
void popup_help_dialog_string(const char *item)
{
  /* Empty stub. */
}

void popdown_help_dialog(void)
{
  /* Empty stub. */
}

/**************************************************************************
  Write a server manual in html format, then quit.
**************************************************************************/
static bool manual_command(void)
{
  FILE *doc;
  char filename[40];
  enum manuals manuals;

  game_init();
  load_rulesets();
  for (manuals = 0; manuals < MANUAL_COUNT; manuals++) {
    int i;

    my_snprintf(filename, sizeof(filename), "manual%d.html", manuals + 1);

    if (!is_reg_file_for_access(filename, TRUE)
        || !(doc = fopen(filename, "w"))) {
      die(_("Could not write manual file %s."), filename);
      return FALSE;
    }

    fprintf(doc, HEADER);

    switch (manuals) {
    case MANUAL_SETTINGS:
      fprintf(doc, _("<h1>Freeciv %s server options</h1>\n\n"), VERSION_STRING);
      for (i = 0; settings[i].name; i++) {
        struct settings_s *op = &settings[i];
        static struct astring abuf = ASTRING_INIT;
        const char *help = _(op->extra_help);

        astr_minsize(&abuf, strlen(help) + 10);
        strcpy(abuf.str, help);
        wordwrap_string(abuf.str, 76);
        fprintf(doc, SEPARATOR);
        fprintf(doc, "%s%s - %s%s\n\n", SECTION_BEGIN, op->name,
                _(op->short_help), SECTION_END);
        if (strlen(op->extra_help) > 0) {
          fprintf(doc, "<pre>%s</pre>\n\n", abuf.str);
        }
        fprintf(doc, "<p class=\"misc\">");
        fprintf(doc, _("Level: %s.<br>"), _(sset_level_names[op->level]));
        fprintf(doc, _("Category: %s.<br>"),
                _(sset_category_names[op->category]));
        if (op->to_client == SSET_SERVER_ONLY) {
          fprintf(doc, _("Can only be used in server console. "));
        }
        if (setting_is_changeable(i)) {
          fprintf(doc, _("Can be changed during a game. "));
        } else {
          fprintf(doc, _("Can <b>not</b> be changed during a game. "));
        }
        fprintf(doc, "</p>\n\n");
        switch (op->type) {
        case SSET_BOOL:
          fprintf(doc, _("<p class=\"bounds\">Minimum: 0, Default: %d, "
                         "Maximum: 1</p>\n\n"),
                  op->bool_default_value ? 1 : 0);
          if (*(op->bool_value) != op->bool_default_value) {
            fprintf(doc, _("<p class=\"changed\">Value set to %d</p>\n\n"),
                    *(op->bool_value));
          }
          break;
        case SSET_INT:
          fprintf(doc, _("<p class=\"bounds\">Minimum: %d, Default: %d, "
                         "Maximum: %d</p>\n\n"),
                  op->int_min_value, op->int_default_value,
                  op->int_max_value);
          if (*(op->int_value) != op->int_default_value) {
            fprintf(doc, _("<p class=\"changed\">Value set to %d</p>\n\n"),
                    *(op->int_value));
          }
          break;
        case SSET_STRING:
          fprintf(doc, _("<p class=\"bounds\">Default: \"%s\"</p>\n\n"),
                  op->string_default_value);
          if (strcmp(op->string_value, op->string_default_value) != 0) {
            fprintf(doc, _("<p class=\"changed\">Value set to %s</p>\n\n"),
                    op->string_value);
          }
          break;
        }
      }
      break;

    case MANUAL_COMMANDS:
      fprintf(doc, _("<h1>Freeciv %s server commands</h1>\n\n"),
              VERSION_STRING);
      for (i = 0; i < CMD_NUM; i++) {
        const struct command *cmd = &commands[i];

        fprintf(doc, SEPARATOR);
        fprintf(doc, _("%s%s  -  %s%s\n\n"), SECTION_BEGIN, cmd->name,
                _(cmd->short_help), SECTION_END);
        if (cmd->synopsis) {
          fprintf(doc, _("<table>\n<tr>\n<td valign=\"top\">"
                         "<pre>Synopsis:</pre></td>\n<td>"));
          fprintf(doc, "<pre>%s</pre></td></tr></table>", _(cmd->synopsis));
        }
        fprintf(doc, _("<p class=\"level\">Level: %s</p>\n\n"),
                cmdlevel_name(cmd->level));
        if (cmd->extra_help) {
          static struct astring abuf = ASTRING_INIT;
          const char *help = _(cmd->extra_help);

          astr_minsize(&abuf, strlen(help)+1);
          strcpy(abuf.str, help);
          wordwrap_string(abuf.str, 76);
          fprintf(doc, _("<p>Description:</p>\n\n"));
          fprintf(doc, "<pre>%s</pre>\n\n", abuf.str);
        }
      }
      break;

    case MANUAL_TERRAIN:
      fprintf(doc, _("<h1>Freeciv %s terrain help</h1>\n\n"),
              VERSION_STRING);
      fprintf(doc, "<table><tr bgcolor=#9bc3d1><th colspan=2>%s</th>", _("Terrain"));
      fprintf(doc, "<th>F/P/T</th><th>%s</th>", _("Resources"));
      fprintf(doc, "<th>%s<br/>%s</th>", _("Move cost"), _("Defense bonus"));
      fprintf(doc, "<th>%s<br/>%s<br/>%s<br/>%s<br/>(%s)</th>",
              _("Irrigation"), _("Mining"), _("Road"), _("Transform"), _("turns"));
      fprintf(doc, "<th>%s<br/>%s<br/>%s<br/>%s<br/>%s</th></tr>\n\n",
              _("Airbase"), _("Fortress"), _("Rail"),
              _("Clean pollution"), _("Clean fallout"));
      terrain_type_iterate(pterrain) {
        const struct resource **r;

        if (pterrain->name[0] == '\0') {
          /* Must be a disabled piece of terrain */
          continue;
        }

        fprintf(doc, "<tr><td>" IMAGE_BEGIN "%s" IMAGE_END "</td><td>%s</td>",
                pterrain->graphic_str, get_name(pterrain));
        fprintf(doc, "<td>%d/%d/%d</td>\n",
                pterrain->output[O_FOOD], pterrain->output[O_SHIELD],
                pterrain->output[O_TRADE]);

        fprintf(doc, "<td><table width=\"100%%\">\n");
        for (r = pterrain->resources; *r; r++) {
          fprintf(doc, "<tr><td>" IMAGE_BEGIN "%s" IMAGE_END "</td><td>%s</td>"
                  "<td align=\"right\">%d/%d/%d</td></tr>\n",
                  (*r)->graphic_str, (*r)->name, (*r)->output[O_FOOD],
                  (*r)->output[O_SHIELD], (*r)->output[O_TRADE]);
        }
        fprintf(doc, "</table></td>\n");

        fprintf(doc, "<td align=\"center\">%d<br/>+%d%%</td>\n",
                pterrain->movement_cost, pterrain->defense_bonus);

        fprintf(doc, "<td><table width=\"100%%\">\n");
        if (pterrain->irrigation_result == pterrain) {
          fprintf(doc, "<tr><td>+%d F</td><td align=\"right\">(%d)</td></tr>\n",
                  pterrain->irrigation_food_incr, pterrain->irrigation_time);
        } else if (pterrain->irrigation_result == T_NONE) {
          fprintf(doc, "<tr><td>%s</td></tr>\n", _("impossible"));
        } else {
          fprintf(doc, "<tr><td>%s</td><td align=\"right\">(%d)</td></tr>\n",
                  get_name(pterrain->irrigation_result), pterrain->irrigation_time);
        }
        if (pterrain->mining_result == pterrain) {
          fprintf(doc, "<tr><td>+%d P</td><td align=\"right\">(%d)</td></tr>\n",
                  pterrain->mining_shield_incr, pterrain->mining_time);
        } else if (pterrain->mining_result == T_NONE) {
          fprintf(doc, "<tr><td>%s</td></tr>\n", _("impossible"));
        } else {
          fprintf(doc, "<tr><td>%s</td><td align=\"right\">(%d)</td></tr>\n",
                  get_name(pterrain->mining_result), pterrain->mining_time);
        }
        fprintf(doc, "<tr><td>+%d T</td><td align=\"right\">(%d)</td></tr>\n",
                pterrain->road_trade_incr, pterrain->road_time);
        fprintf(doc, "<tr><td>%s</td><td align=\"right\">(%d)</td></tr>\n</table></td>\n",
                get_name(pterrain->transform_result), pterrain->transform_time);

        fprintf(doc, "<td align=\"center\">%d / %d / %d / %d / %d</td></tr>\n\n",
                pterrain->airbase_time, pterrain->fortress_time, pterrain->rail_time,
                pterrain->clean_pollution_time, pterrain->clean_fallout_time);
      } terrain_type_iterate_end;
      fprintf(doc, "</table>\n");

      break;

    case MANUAL_BUILDINGS:
    case MANUAL_WONDERS:
      if (manuals == MANUAL_BUILDINGS) {
        fprintf(doc, _("<h1>Freeciv %s buildings help</h1>\n\n"), VERSION_STRING);
      } else {
        fprintf(doc, _("<h1>Freeciv %s wonders help</h1>\n\n"), VERSION_STRING);
      }

      fprintf(doc, "<table>\n<tr bgcolor=#9bc3d1><th colspan=2>%s</th>"
                   "<th>%s<br/>%s</th><th>%s<br/>%s</th><th>%s</th></tr>\n\n",
              _("Name"), _("Cost"), _("Upkeep"),
              _("Requirement"), _("Obsolete by"), _("More info"));

      impr_type_iterate(id) {
        struct impr_type *pimpr = get_improvement_type(id);
        char buf[64000];

        if (is_great_wonder(id) == (manuals == MANUAL_BUILDINGS)) {
          continue;
        }

        helptext_building(buf, sizeof(buf), id, NULL);

        fprintf(doc, "<tr><td>" IMAGE_BEGIN "%s" IMAGE_END "</td><td>%s</td>\n"
                     "<td align=\"center\"><b>%d</b><br/>%d</td>\n<td>",
                pimpr->graphic_str, get_improvement_name(id),
                pimpr->build_cost, pimpr->upkeep);

        requirement_vector_iterate(&pimpr->reqs, req) {
          char text[512];
          fprintf(doc, "%s<br/>",
                  req->source.type != REQ_NONE ?
                  get_req_source_text(&req->source, text, sizeof(text)) : _("None"));
        } requirement_vector_iterate_end;

        fprintf(doc, "<em>%s</em></td>\n",
                tech_exists(pimpr->obsolete_by) ?
                advances[pimpr->obsolete_by].name : _("None"));
        fprintf(doc, "<td>%s</td>\n</tr>\n\n", buf);
      } impr_type_iterate_end;
      break;

    case MANUAL_COUNT:
      break;

    } /* switch */

    fprintf(doc, TAIL);
    fclose(doc);
  } /* manuals */

  return TRUE;
}

int main(int argc, char **argv)
{
  int inx;
  bool showhelp = FALSE;
  bool showvers = FALSE;
  char *option = NULL;

  init_nls();
  init_character_encodings(FC_DEFAULT_DATA_ENCODING, FALSE);

  /* parse command-line arguments... */
  inx = 1;
  while (inx < argc) {
    if ((option = get_option_malloc("--file", argv, &inx, argc))) {
      sz_strlcpy(srvarg.load_filename, option);
      free(option);
    } else if (is_option("--help", argv[inx])) {
      showhelp = TRUE;
      break;
    } else if (is_option("--version", argv[inx])) {
      showvers = TRUE;
    }
    inx++;
  }

  if (showvers && !showhelp) {
    fc_fprintf(stderr, "%s \n", freeciv_name_version());
    exit(EXIT_SUCCESS);
  } else if (showhelp) {
    fc_fprintf(stderr,
         _("Usage: %s [option ...]\nValid options are:\n"), argv[0]);
    fc_fprintf(stderr,
         _("  -h, --help\t\tPrint a summary of the options\n"));
    fc_fprintf(stderr, _("  -v, --version\t\tPrint the version number\n"));
    fc_fprintf(stderr, _("Report bugs at %s.\n"), BUG_URL);
    exit(EXIT_SUCCESS);
  }

  manual_command();

  return 0;
}
