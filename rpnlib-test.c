#include <check.h>
#include "rpnlib.h"
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

START_TEST(example_test)
{

ck_assert_int_eq(1,0);
}
END_TEST


int main(void)
{
    Suite *suite = suite_create("Core");
    
    TCase *testcase = tcase_create("Core");
    suite_add_tcase(suite, testcase);

    tcase_add_test(testcase, example_test);

    SRunner *suite_runner = srunner_create(suite);
    srunner_run_all(suite_runner, CK_ENV);    
    int number_failed = srunner_ntests_failed(suite_runner);
    srunner_free(suite_runner);

    return number_failed == 0 ? 0 : 1;
}
