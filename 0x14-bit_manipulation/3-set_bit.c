#include "main.h"
/**
 * set_bit -its set  value of an bit to 1 at a given index.
 *
 * @n: pointer to the num to be modify
 * @index: index of the bit to be set (0 indexed)
 *
 * Return: 1 if it successful, or -1 if an error occurred
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

