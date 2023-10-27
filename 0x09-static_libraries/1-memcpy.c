#include "main.h"
/**
 * *_memcpy - Copies memory area from source memory location to
 * destination memory location
 * @src: source memory location
 * @dest: destination memory location
 * @n: number of bytes to be copied
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
