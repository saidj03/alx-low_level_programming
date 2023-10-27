#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: on success 0.
 */

int main(int argc, char *argv[])
{
	(void)argv; /* ignore argv */

	printf("%d\n", argc - 1);
	return (0);
}
