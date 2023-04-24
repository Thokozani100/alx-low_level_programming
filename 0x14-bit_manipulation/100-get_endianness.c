#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if a big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c ? 1 : 0);
}

