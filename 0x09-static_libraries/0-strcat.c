#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int str = 0;

	do
	{
		len++;
		str++;
	}
		while (dest[str] != '\0');
	/* Concatenate src to dest */
		str = 0;
	do 
	{
		dest[len + str] = src[str];
		str++;
	}
		while (src[str] != '\0');
	return (dest);
}
