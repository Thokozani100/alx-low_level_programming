#include "main.h"
#include <stdio.h>

/**
 * main - prints num of arg that are passed when running
 * @argc: argc count
 * @argv: array of argument str
 * Return: success (0)
 */
int main(int argc, char **argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

