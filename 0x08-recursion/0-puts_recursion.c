#include "main.h"
#include <stdio.h>

/**
  *_puts_recursion - prints a string, followed by a new line
  *@s: A pointer to character
  *Return: 0 on Success.
  */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else

	putchar('\n');
}
