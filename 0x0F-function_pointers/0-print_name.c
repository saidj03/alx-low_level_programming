#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name as is
 * @name: name ofthe person
 * @f: pointer to the function
 *
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
