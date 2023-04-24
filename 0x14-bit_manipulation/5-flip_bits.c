#include "main.h"

/**
 * flip_bits - return  numbers of bits you would need
 * flip to get from one num to another.
 *
 * @n: the first num
 * @m: the second num
 *
 * Return: numbers of bits that are needed to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;

	unsigned long int current;

	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
		count++;
	}

	return (count);
}
