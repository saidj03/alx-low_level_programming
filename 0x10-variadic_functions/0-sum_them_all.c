#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to calculate the sum of ...
 *
 * Return: if n == 0 , 0 otherwise the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	i = 0;

	while (i < n)
	{
		sum += va_arg(ap, int);
	va_end(ap);
	i++;
	}
	return (sum);
}
