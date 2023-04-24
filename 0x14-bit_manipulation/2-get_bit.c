#include "main.h"

/**
 * get_bit - returns the value of an bit at the provided index
 * @n: numbers to search the bits in
 * @index: index of the bit to retrieve (0 indexed)
 *
 * Return: the value of the bit at index or -1 when  an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

