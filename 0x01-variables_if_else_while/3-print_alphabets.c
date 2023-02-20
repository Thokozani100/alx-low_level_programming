#include <stdio.h>

/**
  * main - Prints the alphabetic in lower and upper case
  *
  * Return: Always (Success)
  */
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
	char c, d;
	char c;

	d = 'z';

	for (c = 'a'; c <= d; c++)
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

		if (c == 'z')
		{
			c = 'A';
			d = 'Z';
		}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
}
