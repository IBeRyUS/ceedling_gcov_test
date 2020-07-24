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
    TEST_ASSERT_EQUAL(6 , calculations_sum(4, 2));
}
