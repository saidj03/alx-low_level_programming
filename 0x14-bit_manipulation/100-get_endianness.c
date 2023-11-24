#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char *ch;

	num = 1;
	ch = (char *)&num;
	return (*ch);
}
