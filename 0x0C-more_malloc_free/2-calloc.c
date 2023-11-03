o#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmeb elements of size bytes
 * @nmemb: number of arrays
 * @size: size of memory to print
 *
 * Return: pointer to be newly allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
