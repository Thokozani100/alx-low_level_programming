#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * get_endianness.c - checks endianness
 *
 * Return: 0 if big endian or 1 if little endian
 */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
	printf("Little Endian\n");
	}
	else
	{
	printf("Big Endian\n");
	}
	return (0);
}
