#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits in
 * @index: index, starting from 0 of the bit to be set
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
