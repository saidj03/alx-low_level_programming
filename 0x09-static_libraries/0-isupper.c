#include "main.h"

/**
  _isupper - Checks for uppercase character
Return: 1 if c is uppercase, 0 otherwise
@c: character to be checked
**/

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
