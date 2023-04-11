#include "main.h"
/**
 * int set_bit - ets the value of
 * a bit to 1 at a given index.
 *
 * @n: display change
 *
 * @index: set index to 1
 *
 * return : 1 if succeful and -1 if not
 *
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

