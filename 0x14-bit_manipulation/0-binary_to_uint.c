#include <stddef.h>
#include "main.h"
/**
 * binary_to_uint - its conv an binary num to an unsigned int.
 * @b: pointer to an str of 0 and 1 chars
 *
 * Return: the converted num or 0 if there is one or more chars in the
 * str b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		num = (num << 1) + (*b - '0');
		b++;
	}

	return (num);
}
