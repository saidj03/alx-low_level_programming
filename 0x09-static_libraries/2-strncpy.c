#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: string bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str;

	for (str = 0; str < n; str++)
	{
		if (src[str] != '\0')
		{
			dest[str] = src[str];
		}
		else
		{
			dest[str] = '\0';
		}
	}
	return (dest);
}
