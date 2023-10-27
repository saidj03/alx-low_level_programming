#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - Copies a string from source to destination
 * @dest: the destination string
 * @src: the source string
 * Return: pointer to destination
 */


char *_strcpy(char *dest, char *src)
{
	int str = 0;

	while (src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
	return (dest);
}
