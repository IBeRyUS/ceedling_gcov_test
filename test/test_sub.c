#include "unity.h"

#include "calculations.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_calculations_subtract(void)
{
    TEST_ASSERT_EQUAL(2 , calculations_subtract(4, 2));
}
