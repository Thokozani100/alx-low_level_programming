
#include <stdio.h>

/**
 * main - prints num of arg that are passed when running
 * @argc: argc count
 * @argv: array of argument str
 * Return: success (0)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}


