#include "main.h"
#include <stdio.h>

/**
  *factorial - returns the factorial of a given number.
  *@n: The number to be tested
  *Return: factorial
  */

int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 1)
		return (n * factorial(n - 1));
	else
		return (-1);
}
