#include "main.h"

/**
 * print_sign - its print the sign of a number
 * @n: int checks
 * Return: 1 and print + if n is greater than an zero
 * 0 prints 0 if n is zero
 * -1 and if  prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(50);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

