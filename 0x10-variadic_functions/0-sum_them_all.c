
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returning sum of all parameters
 * main - check the code
 * @n ...: Variable parameters to calculate sum.
 * 
 * Return: If n == 0 - 0
 */
int sum_them_all(void)
{
    int sum;

    sum = sum_them_all(13, 1999, 1950);
    printf("%d\n", sum);
    sum = sum_them_all(13, 1999, -1000, 509);
    printf("%d\n, sum");
    return (0);
    
}
