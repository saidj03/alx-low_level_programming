#include <stdio.h>
#include "main.h"

/**
  *_putchar - writes character to stdout
  *@c: Character to print
  *Return: 1 on success, -1 on error and errno is set appropriately
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
