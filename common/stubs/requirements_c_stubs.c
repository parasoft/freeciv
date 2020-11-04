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
#include "requirements.h"

/** User stub definition for function: _Bool is_req_active(const struct player *, const struct player *, const struct city *, const struct impr_type *, const struct tile *, const struct unit *, const struct unit_type *, const struct output_type *, const struct specialist *, const struct action *, const struct requirement *, const enum req_problem_type) */
EXTERN_C_LINKAGE _Bool is_req_active (const struct player * target_player, const struct player * other_player, const struct city * target_city, const struct impr_type * target_building, const struct tile * target_tile, const struct unit * target_unit, const struct unit_type * target_unittype, const struct output_type * target_output, const struct specialist * target_specialist, const struct action * target_action, const struct requirement * req, const enum req_problem_type prob_type) ;
EXTERN_C_LINKAGE _Bool CppTest_Stub_is_req_active (const struct player * target_player, const struct player * other_player, const struct city * target_city, const struct impr_type * target_building, const struct tile * target_tile, const struct unit * target_unit, const struct unit_type * target_unittype, const struct output_type * target_output, const struct specialist * target_specialist, const struct action * target_action, const struct requirement * req, const enum req_problem_type prob_type) 
{
    CPPTEST_STUB_CALLED("is_req_active");

    _Bool __return = false;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, _Bool* __return, const struct player * target_player, const struct player * other_player, const struct city * target_city, const struct impr_type * target_building, const struct tile * target_tile, const struct unit * target_unit, const struct unit_type * target_unittype, const struct output_type * target_output, const struct specialist * target_specialist, const struct action * target_action, const struct requirement * req, const enum req_problem_type prob_type)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("is_req_active", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = is_req_active(target_player, other_player, target_city, target_building, target_tile, target_unit, target_unittype, target_output, target_specialist, target_action, req, prob_type);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(_Bool* __return, const struct player * target_player, const struct player * other_player, const struct city * target_city, const struct impr_type * target_building, const struct tile * target_tile, const struct unit * target_unit, const struct unit_type * target_unittype, const struct output_type * target_output, const struct specialist * target_specialist, const struct action * target_action, const struct requirement * req, const enum req_problem_type prob_type);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, target_player, other_player, target_city, target_building, target_tile, target_unit, target_unittype, target_output, target_specialist, target_action, req, prob_type);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
