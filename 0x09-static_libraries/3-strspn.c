#include "main.h"

/**
 * _strspn - Calculates the length of a prefix substring in a string
 * @s: the string we want to find prefix length
 * @accept: string containing the characters we accept in the prefix
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		int j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
		return (count);
}
