/*
 * main.c
 *
 *  Created on: 24 Jul 2020
 *      Author: iberyus
 */
#include <stdio.h>
#include "calculations.h"


int main(void)
{
    int a = 4;
    int b = 2;
    printf( "sum            of %d and %d is %d\n", a, b, calculations_sum( a, b ) );
    printf( "multiplication of %d and %d is %d\n", a, b, calculations_multiply( a, b ) );
    printf( "subtraction    of %d and %d is %d\n", a, b, calculations_subtract( a, b ) );
    printf( "division       of %d and %d is %f\n", a, b, calculations_divide( a, b ) );
}
