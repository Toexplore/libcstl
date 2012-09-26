#ifndef _UT_CSTL_ALGO_NONMUTATING_H_
#define _UT_CSTL_ALGO_NONMUTATING_H_

UT_SUIT_DECLARATION(cstl_algo_nonmutating)
/*
 * test algo_for_each
 */
UT_CASE_DECLARATION(algo_for_each)
void test_algo_for_each__invalid_range(void** state);
void test_algo_for_each__invalid_range_2(void** state);
void test_algo_for_each__empty_range(void** state);
void test_algo_for_each__ufun_NULL(void** state);
void test_algo_for_each__mutate_all(void** state);
void test_algo_for_each__mutate_partial(void** state);
void test_algo_for_each__cstr(void** state);
void test_algo_for_each__cstl_builtin(void** state);
void test_algo_for_each__user_define(void** state);
/*
 * test algo_find_if
 */
UT_CASE_DECLARATION(algo_find_if)
void test_algo_find_if__invalid_range(void** state);
void test_algo_find_if__invalid_range_2(void** state);
void test_algo_find_if__empty_range(void** state);
void test_algo_find_if__ufun_NULL(void** state);
void test_algo_find_if__c_builtin_found(void** state);
void test_algo_find_if__c_builtin_not_found(void** state);
void test_algo_find_if__cstr_found(void** state);
void test_algo_find_if__cstr_not_found(void** state);
void test_algo_find_if__cstl_builtin_found(void** state);
void test_algo_find_if__cstl_builtin_not_found(void** state);
void test_algo_find_if__user_define_found(void** state);
void test_algo_find_if__user_define_not_found(void** state);

#define UT_CSTL_ALGO_NONMUTATING_CASE\
	UT_SUIT_BEGIN(cstl_algo_nonmutating, test_algo_for_each__invalid_range),\
    UT_CASE(test_algo_for_each__invalid_range_2),\
    UT_CASE(test_algo_for_each__empty_range),\
    UT_CASE(test_algo_for_each__ufun_NULL),\
    UT_CASE(test_algo_for_each__mutate_all),\
    UT_CASE(test_algo_for_each__mutate_partial),\
    UT_CASE(test_algo_for_each__cstr),\
    UT_CASE(test_algo_for_each__cstl_builtin),\
    UT_CASE(test_algo_for_each__user_define),\
    UT_CASE_BEGIN(algo_find_if, test_algo_find_if__invalid_range),\
    UT_CASE(test_algo_find_if__invalid_range_2),\
    UT_CASE(test_algo_find_if__empty_range),\
    UT_CASE(test_algo_find_if__ufun_NULL),\
    UT_CASE(test_algo_find_if__c_builtin_found),\
    UT_CASE(test_algo_find_if__c_builtin_not_found),\
    UT_CASE(test_algo_find_if__cstr_found),\
    UT_CASE(test_algo_find_if__cstr_not_found),\
    UT_CASE(test_algo_find_if__cstl_builtin_found),\
    UT_CASE(test_algo_find_if__cstl_builtin_not_found),\
    UT_CASE(test_algo_find_if__user_define_found),\
    UT_CASE(test_algo_find_if__user_define_not_found),\

#endif /* _UT_CSTL_ALGO_NONMUTATING_H_ */
