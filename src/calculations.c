#include "calculations.h"

int calculations_sum(int a, int b)
{
    int result;

    result = a;
#ifdef SUM
    result = result + b;
#endif
    return (result);
}

int calculations_multiply(int a, int b)
{
    int result;

    result = a;
    result = result * b;
    return (result);
}

int calculations_subtract(int a, int b)
{
    int result;

    result = a;
    result = result - b;
    return (result);
}

float calculations_divide(int a, int b)
{
    float result = 0;

    if (b != 0)
    {
        result = (float)a;
        result = result / (float)b;
    }
    return (result);
}

