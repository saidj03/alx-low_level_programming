#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  *print_numbers - prints numbers, followed by a new line.
  *@separator: is the string to be printed between numbers
  *@n: the number of integers passed to the function
  *Return: Always 0
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && (index < (n - 1)))
			printf("%s", separator);
	}
	va_end(nums);
	printf("\n");
}
