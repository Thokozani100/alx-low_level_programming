#include <stdio.h>
/**
 * main - it prints number of arg that are pass when running
 * program but are not including program name.
 * @argc: argu counti
 * @argv: array of arg str
 * Return: success (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);
	}

	return (0);
}
