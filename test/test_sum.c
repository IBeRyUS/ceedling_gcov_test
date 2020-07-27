#include "unity.h"

#include "calculations.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_calculations_sum(void)
{
#ifdef SUM
    TEST_ASSERT_EQUAL(6 , calculations_sum(4, 2));
#else
    TEST_ASSERT_EQUAL(4 , calculations_sum(4, 2));
#endif
}
