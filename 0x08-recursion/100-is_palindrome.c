#include "main.h"
#include <stdio.h>

/**
  *_strlen_recursion - Prints string length
  *@s: input string
  *Return: string lrngth
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
  *pal_checker - checks if a string is empty
  *@s: input string.
  *@i: left index.
  *@j: rigth index.
  *Return: 1 if is palindrome and 0 if not
  */

int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
	{
		if (i > j / 2)
		{
			return (1); /* It's a palindrome */
		}
		else
		{
			return (pal_checker(s, i + 1, j - 1));
		}
	}
	else
	{
		return (0); /* Not a palindrome */
	}
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
