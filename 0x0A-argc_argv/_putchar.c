#include <stdio.h>
#include "main.h"

/**
  *_putchar - Writes the character c to the stdout
  *@c: The character to print
  *
  *Return: On success 1
  *On error, -1 is returneed and errno is set appropriately
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
