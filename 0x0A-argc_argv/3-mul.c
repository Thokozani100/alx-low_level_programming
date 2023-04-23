#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies 2 num
 * @argc: the number of arguments pass to the program
 * @argv: a arr of strings containing the program arguments
 *
 * Return: 0 if the multiplication is successful, otherwise 1
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}

