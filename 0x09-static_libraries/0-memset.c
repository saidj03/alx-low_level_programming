#include "main.h"

/**
 * *_memset - Fills memory with constant byte
 * @s: A pointer
 * @b: The constant byte
 * @n: The number of bytes
 * Return: A pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		*(s + k) = b;
		k++;
	}
	return (s);
}
