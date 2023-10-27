#include "main.h"
#include <stddef.h>

/**
 * *_strchr - Locates a character in a string
 * @c: the character to be located
 * @s: the string in which a character is to be located
 * Return: a pointer to the first occurence of c, else NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
