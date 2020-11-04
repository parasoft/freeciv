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
#include "genlist.h"

/** User stub definition for function: struct genlist_link * genlist_head(const struct genlist *) */
EXTERN_C_LINKAGE struct genlist_link * genlist_head (const struct genlist * pgenlist) ;
EXTERN_C_LINKAGE struct genlist_link * CppTest_Stub_genlist_head (const struct genlist * pgenlist) 
{
    CPPTEST_STUB_CALLED("genlist_head");

    struct genlist_link * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct genlist_link ** __return, const struct genlist * pgenlist)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("genlist_head", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct genlist_link ** __return, const struct genlist * pgenlist);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, pgenlist);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: struct genlist_link * genlist_link_next(const struct genlist_link *) */
EXTERN_C_LINKAGE struct genlist_link * genlist_link_next (const struct genlist_link * plink) ;
EXTERN_C_LINKAGE struct genlist_link * CppTest_Stub_genlist_link_next (const struct genlist_link * plink) 
{
    CPPTEST_STUB_CALLED("genlist_link_next");

    struct genlist_link * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, struct genlist_link ** __return, const struct genlist_link * plink)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("genlist_link_next", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(struct genlist_link ** __return, const struct genlist_link * plink);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, plink);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}

/** User stub definition for function: void * genlist_link_data(const struct genlist_link *) */
EXTERN_C_LINKAGE void * genlist_link_data (const struct genlist_link * plink) ;
EXTERN_C_LINKAGE void * CppTest_Stub_genlist_link_data (const struct genlist_link * plink) 
{
    CPPTEST_STUB_CALLED("genlist_link_data");

    void * __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, void ** __return, const struct genlist_link * plink)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("genlist_link_data", &CppTest_StubCallback_SomeName);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(void ** __return, const struct genlist_link * plink);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, plink);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
