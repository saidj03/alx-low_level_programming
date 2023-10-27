#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string
 * Return: Always 0
 */

void _puts(char *str)
{
	int k;

	k = 0;
	while (*(str + k) != '\0')
	{
		_putchar (*(str + k));
		k++;
	}
	_putchar('\n');
}
