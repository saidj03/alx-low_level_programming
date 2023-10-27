#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: anothe string
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		int j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (s + i;
			}
			else
			{
			j++;
			}
		}
	
	}
	return (NULL);
}
