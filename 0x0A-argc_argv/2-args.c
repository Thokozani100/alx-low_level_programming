#include <stdio.h>
/**
 * main - it prints number of arg that are pass when running
 * program but are not including program name.
 * @argc: argu counti
 * @argv: array of arg str
 * Return: success (0)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
