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
#include "tile.h"

/** User stub definition for function: _Bool tile_is_seen(const struct tile *, const struct player *) */
EXTERN_C_LINKAGE _Bool tile_is_seen (const struct tile * target_tile, const struct player * pow_player) ;
EXTERN_C_LINKAGE _Bool CppTest_Stub_tile_is_seen (const struct tile * target_tile, const struct player * pow_player) 
{
    CPPTEST_STUB_CALLED("tile_is_seen");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct tile * target_tile, const struct player * pow_player)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("tile_is_seen", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = tile_is_seen(target_tile, pow_player);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct tile * target_tile, const struct player * pow_player);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, target_tile, pow_player);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: struct city * tile_city(const struct tile *) */
EXTERN_C_LINKAGE struct city * tile_city (const struct tile * ptile) ;
EXTERN_C_LINKAGE struct city * CppTest_Stub_tile_city (const struct tile * ptile) 
{
    CPPTEST_STUB_CALLED("tile_city");

    struct city * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct city ** __return, const struct tile * ptile)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("tile_city", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = tile_city(ptile);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct city ** __return, const struct tile * ptile);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, ptile);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
