#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index, starting from 0 of the bit to be set
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
