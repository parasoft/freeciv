#include "cpptest.h"

/**
 * This file contains user stub definitions.
 *
 * To create a user stub:
 * 1. Open stub template list:
 *    - Eclipse IDE: type 'stub' and press <Ctrl> <Space>
 *    - Microsoft Visual Studio IDE: use context menu C++test->Insert Snippet...
 * 2. Choose the stub template from the list.
 * 3. #include the header file where the function you want to stub is originally 
 *    declared as well as any supporting header files as necessary.
 * 4. Fill out the stub signature to match that of the original function, 
 *    while keeping the CppTest_Stub prefix when it applies.
 *    Note: for C++ operators, use appropriate stub names - e.g.:
 *        CppTest_Stub_operator_new    for operator new
 *        CppTest_Stub_operator_delete for operator delete
 *        CppTest_Stub_operator_plus   for operator +
 *    Refer to C++test User's Guide for a complete list of stub names for operators. 
 * 5. Fill out the body of the stub according to intent.
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
#include "player.h"

/** User stub definition for function: _Bool can_player_see_unit_at(const struct player *, const struct unit *, const struct tile *, _Bool) */
EXTERN_C_LINKAGE _Bool can_player_see_unit_at (const struct player * pplayer, const struct unit * punit, const struct tile * ptile, _Bool is_transported) ;
EXTERN_C_LINKAGE _Bool CppTest_Stub_can_player_see_unit_at (const struct player * pplayer, const struct unit * punit, const struct tile * ptile, _Bool is_transported) 
{
    CPPTEST_STUB_CALLED("can_player_see_unit_at");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * pplayer, const struct unit * punit, const struct tile * ptile, _Bool is_transported)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("can_player_see_unit_at", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = can_player_see_unit_at(pplayer, punit, ptile, is_transported);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pplayer, const struct unit * punit, const struct tile * ptile, _Bool is_transported);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pplayer, punit, ptile, is_transported);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: _Bool can_player_see_units_in_city(const struct player *, const struct city *) */
EXTERN_C_LINKAGE _Bool can_player_see_units_in_city (const struct player * pplayer, const struct city * pcity) ;
EXTERN_C_LINKAGE _Bool CppTest_Stub_can_player_see_units_in_city (const struct player * pplayer, const struct city * pcity) 
{
    CPPTEST_STUB_CALLED("can_player_see_units_in_city");

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
     *     CPPTEST_REGISTER_STUB_CALLBACK("can_player_see_units_in_city", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = can_player_see_units_in_city(pplayer, pcity);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pplayer, const struct city * pcity);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pplayer, pcity);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: _Bool can_player_see_unit(const struct player *, const struct unit *) */
EXTERN_C_LINKAGE _Bool can_player_see_unit (const struct player * pplayer, const struct unit * punit) ;
EXTERN_C_LINKAGE _Bool CppTest_Stub_can_player_see_unit (const struct player * pplayer, const struct unit * punit) 
{
    CPPTEST_STUB_CALLED("can_player_see_unit");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * pplayer, const struct unit * punit)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("can_player_see_unit", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = can_player_see_unit(pplayer, punit);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pplayer, const struct unit * punit);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pplayer, punit);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: _Bool player_has_embassy(const struct player *, const struct player *) */
EXTERN_C_LINKAGE _Bool player_has_embassy (const struct player * pplayer, const struct player * pplayer2) ;
EXTERN_C_LINKAGE _Bool CppTest_Stub_player_has_embassy (const struct player * pplayer, const struct player * pplayer2) 
{
    CPPTEST_STUB_CALLED("player_has_embassy");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * pplayer, const struct player * pplayer2)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("player_has_embassy", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = player_has_embassy(pplayer, pplayer2);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pplayer, const struct player * pplayer2);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pplayer, pplayer2);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: struct player_diplstate * player_diplstate_get(const struct player *, const struct player *) */
EXTERN_C_LINKAGE struct player_diplstate * player_diplstate_get (const struct player * plr1, const struct player * plr2) ;
EXTERN_C_LINKAGE struct player_diplstate * CppTest_Stub_player_diplstate_get (const struct player * plr1, const struct player * plr2) 
{
    CPPTEST_STUB_CALLED("player_diplstate_get");

    struct player_diplstate * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct player_diplstate ** __return, const struct player * plr1, const struct player * plr2)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("player_diplstate_get", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = player_diplstate_get(plr1, plr2);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct player_diplstate ** __return, const struct player * plr1, const struct player * plr2);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, plr1, plr2);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: _Bool player_can_see_city_externals(const struct player *, const struct city *) */
EXTERN_C_LINKAGE _Bool player_can_see_city_externals (const struct player * pow_player, const struct city * target_city) ;
EXTERN_C_LINKAGE _Bool CppTest_Stub_player_can_see_city_externals (const struct player * pow_player, const struct city * target_city) 
{
    CPPTEST_STUB_CALLED("player_can_see_city_externals");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * pow_player, const struct city * target_city)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("player_can_see_city_externals", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = player_can_see_city_externals(pow_player, target_city);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * pow_player, const struct city * target_city);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pow_player, target_city);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
