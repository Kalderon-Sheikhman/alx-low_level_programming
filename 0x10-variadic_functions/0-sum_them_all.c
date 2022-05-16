#include "variadic_functions.h"
/*
 * File: 0-sum_them_all.c
 * Auth: Sheikhman_Kalderon
 */


#include <stdarg.h>

/**
 * sum_them_all - sum of all parameters.
 * @n: parameters passed to the function.
 * @...: variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         otherwise - sum all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
