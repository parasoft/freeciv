#include "cpptest.h"

/** 
 * This file contains auto-generated stub definitions.
 *
 * Available C++test API functions (see C++test Users Guide for details):
 *     void CppTest_Assert(bool test, const char * message)
 *     void CppTest_Break()
 *     const char* CppTest_GetCurrentTestCaseName()
 *     const char* CppTest_GetCurrentTestSuiteName()
 *     bool CppTest_IsCurrentTestCase(const char* testCaseName)
 */

/** 
 * Header files where the stubbed functions are originally declared.
 * Verify #include directives and add any additional header files as necessary.
 */
#include "city.h"
#include "diptreaty.h"
#include "game.h"
#include "improvement.h"
#include "map.h"
#include "player.h"
#include "unittype.h"

/** Auto-generated stub definition for function: _Bool can_player_see_city_internals(const struct player *, const struct city *) */
EXTERN_C_LINKAGE _Bool can_player_see_city_internals (const struct player * pplayer, const struct city * pcity) ;
EXTERN_C_LINKAGE _Bool CppTest_Auto_Stub_can_player_see_city_internals (const struct player * pplayer, const struct city * pcity) 
{
    CPPTEST_STUB_CALLED("can_player_see_city_internals");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * pplayer, const struct city * pcity)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("can_player_see_city_internals", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = can_player_see_city_internals(pplayer, pcity);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pplayer, const struct city * pcity);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pplayer, pcity);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: _Bool can_player_see_hypotetic_units_at(const struct player *, const struct tile *) */
EXTERN_C_LINKAGE _Bool can_player_see_hypotetic_units_at (const struct player * pplayer, const struct tile * ptile) ;
EXTERN_C_LINKAGE _Bool CppTest_Auto_Stub_can_player_see_hypotetic_units_at (const struct player * pplayer, const struct tile * ptile) 
{
    CPPTEST_STUB_CALLED("can_player_see_hypotetic_units_at");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * pplayer, const struct tile * ptile)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("can_player_see_hypotetic_units_at", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = can_player_see_hypotetic_units_at(pplayer, ptile);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pplayer, const struct tile * ptile);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pplayer, ptile);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: struct tile * map_pos_to_tile(const struct civ_map *, int, int) */
EXTERN_C_LINKAGE struct tile * map_pos_to_tile (const struct civ_map * nmap, int x, int y) ;
EXTERN_C_LINKAGE struct tile * CppTest_Auto_Stub_map_pos_to_tile (const struct civ_map * nmap, int x, int y) 
{
    CPPTEST_STUB_CALLED("map_pos_to_tile");

    struct tile * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct tile ** __return, const struct civ_map * nmap, int x, int y)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("map_pos_to_tile", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = map_pos_to_tile(nmap, x, y);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct tile ** __return, const struct civ_map * nmap, int x, int y);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, nmap, x, y);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: struct tile * city_tile(const struct city *) */
EXTERN_C_LINKAGE struct tile * city_tile (const struct city * pcity) ;
EXTERN_C_LINKAGE struct tile * CppTest_Auto_Stub_city_tile (const struct city * pcity) 
{
    CPPTEST_STUB_CALLED("city_tile");

    struct tile * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct tile ** __return, const struct city * pcity)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("city_tile", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = city_tile(pcity);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct tile ** __return, const struct city * pcity);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pcity);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: int city_map_tiles(int) */
EXTERN_C_LINKAGE int city_map_tiles (int city_radius_sq) ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_city_map_tiles (int city_radius_sq) 
{
    CPPTEST_STUB_CALLED("city_map_tiles");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, int city_radius_sq)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("city_map_tiles", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = city_map_tiles(city_radius_sq);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, int city_radius_sq);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, city_radius_sq);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: _Bool city_tile_index_to_xy(int *, int *, int, int) */
EXTERN_C_LINKAGE _Bool city_tile_index_to_xy (int * city_map_x, int * city_map_y, int city_tile_index, int city_radius_sq) ;
EXTERN_C_LINKAGE _Bool CppTest_Auto_Stub_city_tile_index_to_xy (int * city_map_x, int * city_map_y, int city_tile_index, int city_radius_sq) 
{
    CPPTEST_STUB_CALLED("city_tile_index_to_xy");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, int * city_map_x, int * city_map_y, int city_tile_index, int city_radius_sq)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("city_tile_index_to_xy", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = city_tile_index_to_xy(city_map_x, city_map_y, city_tile_index, city_radius_sq);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, int * city_map_x, int * city_map_y, int city_tile_index, int city_radius_sq);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, city_map_x, city_map_y, city_tile_index, city_radius_sq);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: _Bool is_improvement_visible(const struct impr_type *) */
EXTERN_C_LINKAGE _Bool is_improvement_visible (const struct impr_type * pimprove) ;
EXTERN_C_LINKAGE _Bool CppTest_Auto_Stub_is_improvement_visible (const struct impr_type * pimprove) 
{
    CPPTEST_STUB_CALLED("is_improvement_visible");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct impr_type * pimprove)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("is_improvement_visible", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = is_improvement_visible(pimprove);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct impr_type * pimprove);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pimprove);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: struct tile * city_map_to_tile(const struct tile *, int, int, int) */
EXTERN_C_LINKAGE struct tile * city_map_to_tile (const struct tile * city_center, int city_radius_sq, int city_map_x, int city_map_y) ;
EXTERN_C_LINKAGE struct tile * CppTest_Auto_Stub_city_map_to_tile (const struct tile * city_center, int city_radius_sq, int city_map_x, int city_map_y) 
{
    CPPTEST_STUB_CALLED("city_map_to_tile");

    struct tile * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct tile ** __return, const struct tile * city_center, int city_radius_sq, int city_map_x, int city_map_y)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("city_map_to_tile", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = city_map_to_tile(city_center, city_radius_sq, city_map_x, city_map_y);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct tile ** __return, const struct tile * city_center, int city_radius_sq, int city_map_x, int city_map_y);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, city_center, city_radius_sq, city_map_x, city_map_y);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: const struct unit_type * unit_type_get(const struct unit *) */
EXTERN_C_LINKAGE const struct unit_type * unit_type_get (const struct unit * punit) ;
EXTERN_C_LINKAGE const struct unit_type * CppTest_Auto_Stub_unit_type_get (const struct unit * punit) 
{
    CPPTEST_STUB_CALLED("unit_type_get");

    const struct unit_type * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, const struct unit_type ** __return, const struct unit * punit)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("unit_type_get", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = unit_type_get(punit);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(const struct unit_type ** __return, const struct unit * punit);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, punit);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: int city_map_radius_sq_get(const struct city *) */
EXTERN_C_LINKAGE int city_map_radius_sq_get (const struct city * pcity) ;
EXTERN_C_LINKAGE int CppTest_Auto_Stub_city_map_radius_sq_get (const struct city * pcity) 
{
    CPPTEST_STUB_CALLED("city_map_radius_sq_get");

    int __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, int* __return, const struct city * pcity)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("city_map_radius_sq_get", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = city_map_radius_sq_get(pcity);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(int* __return, const struct city * pcity);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pcity);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: _Bool could_intel_with_player(const struct player *, const struct player *) */
EXTERN_C_LINKAGE _Bool could_intel_with_player (const struct player * pplayer, const struct player * aplayer) ;
EXTERN_C_LINKAGE _Bool CppTest_Auto_Stub_could_intel_with_player (const struct player * pplayer, const struct player * aplayer) 
{
    CPPTEST_STUB_CALLED("could_intel_with_player");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * pplayer, const struct player * aplayer)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("could_intel_with_player", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = could_intel_with_player(pplayer, aplayer);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pplayer, const struct player * aplayer);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pplayer, aplayer);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for function: struct city * game_city_by_number(int) */
EXTERN_C_LINKAGE struct city * game_city_by_number (int id) ;
EXTERN_C_LINKAGE struct city * CppTest_Auto_Stub_game_city_by_number (int id) 
{
    CPPTEST_STUB_CALLED("game_city_by_number");

    struct city * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct city ** __return, int id)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("game_city_by_number", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = game_city_by_number(id);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct city ** __return, int id);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, id);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** Auto-generated stub definition for variable: const int  DIR_DX[8] */
EXTERN_C_LINKAGE_START
extern const int  DIR_DX[8];
const int  CppTest_Variable_Auto_Stub_DIR_DX[8] = {0, 0, 0, 0, 0, 0, 0, 0};
EXTERN_C_LINKAGE_END

/** Auto-generated stub definition for variable: const int  DIR_DY[8] */
EXTERN_C_LINKAGE_START
extern const int  DIR_DY[8];
const int  CppTest_Variable_Auto_Stub_DIR_DY[8] = {0, 0, 0, 0, 0, 0, 0, 0};
EXTERN_C_LINKAGE_END

/** Auto-generated stub definition for variable: const char * nologmsg */
EXTERN_C_LINKAGE_START
extern const char * nologmsg;
const char * CppTest_Variable_Auto_Stub_nologmsg = 0;
EXTERN_C_LINKAGE_END

/** Auto-generated stub definition for variable: struct world wld */
EXTERN_C_LINKAGE_START
extern struct world wld;
struct world CppTest_Variable_Auto_Stub_wld = {{0, {DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST}, {DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST, DIR8_NORTHWEST}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, {{MAPSIZE_FULLSIZE, 0, 0, 0, 0, 0, 0, 0, 0, 0, MAPGEN_SCENARIO, MAPSTARTPOS_DEFAULT, false, false, 0, false, false, 0, 0, 0, false, false, false, TEAM_PLACEMENT_DISABLED}}}, 0, 0};
EXTERN_C_LINKAGE_END
