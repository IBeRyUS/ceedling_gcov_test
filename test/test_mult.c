#include "unity.h"

#include "calculations.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_calculations_multiply(void)
{
    TEST_ASSERT_EQUAL(8 , calculations_multiply(4, 2));
}
