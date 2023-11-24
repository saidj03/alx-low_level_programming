#include "main.h"
/**
 * clear_bit - sets the value ofa bit to 0 at a given index
 * @n: parameter
 * @index: index, starting from 0 of the bit
 * Return: 1 if it worked, -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
