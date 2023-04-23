#include <stdio.h>
#include "main.h"
/**
 * main - its priints the name of the program
 * @argc: numb of arguments
 * @argv: array of arguments
 * Return: its Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
