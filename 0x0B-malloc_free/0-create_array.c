#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  **create_array - Creates an array of chars and
  *initializes it with a specific char
  *@size: memory size of the array
  *@c: a specific character
  *Return: NULL if size is 0
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);
	for (i = 0; i < size ; i++)
		s[i] = c;
	return (s);
}
