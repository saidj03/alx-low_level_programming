#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: pointer to a string character
 * Return: Always 0
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int i = 0;
	char *temp = s;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		temp++;
		if (*temp == '-')
			sign *= -1;
	}
	if (*temp != '\0')
	{
		do {
			i = i * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (i * sign);
}
