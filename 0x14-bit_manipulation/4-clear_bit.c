#include "main.h"
/**
 * clear_bit - set value of an bit to 0 at a given index.
 * @n: direct numbers to be change.
 * @index: the bit be clear.
 *
 * Return: 1 if a success, -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)

{

	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

