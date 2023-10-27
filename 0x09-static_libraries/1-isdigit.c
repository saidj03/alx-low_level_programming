#include "main.h"

/**
  *_isdigit - checks for a digit
  *Return: 1 if c is digit otherwise 0
  *@c: the character to be checked
  */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
