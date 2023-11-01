#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *_strlen - returns length of a string
  *@s: A pointer to character string
  *Return: string length
  */

int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * *_strdup - function to return pointer to string
 * @str: pointer to string array input
 * Return: pointer to string created
 */


char *_strdup(char *str)
{
	char *ptr;
	int size;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	i = 0;
	while (i < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
	}
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
