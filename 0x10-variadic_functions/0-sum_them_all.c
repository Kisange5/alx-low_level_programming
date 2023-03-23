#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 * Return: if n == 0 return 0
 *  Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lk;
	unsigned int i, sum = 0;

	va_start(lk, n);

	for (i = 0; i < n; i++)
		sum += va_arg(lk, int);

	va_end(lk);

	return (sum);
}
