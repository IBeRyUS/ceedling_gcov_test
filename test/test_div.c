#include "unity.h"

#include "calculations.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_calculations_divide(void)
{
    TEST_ASSERT_EQUAL(2 , calculations_divide(4, 2));
}
