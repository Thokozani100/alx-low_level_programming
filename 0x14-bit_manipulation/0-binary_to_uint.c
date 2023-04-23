#include "main.h"
/**
 * binary_to_uint - its converts an binary num to an unsigned int.
 * @b: pointer to an string of 0 and 1 chars
 *
 * Return: the converted num or 0 if there is one or more chars in the
 * str b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

