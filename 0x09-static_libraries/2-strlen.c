#include "main.h"

/**
 * _strlen - returns string length
 * @s: the character in string
 * Return: string length
 */

int _strlen(char *s)
{
	int str1;

	str1 = 0;
	while (s[str1] != '\0')
	{
		str1++;
	}
	return (str1);
}
