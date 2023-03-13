#include <stdio.h>
#include "main.h"
/**
 * the  main - prints  name of the program
 * @argc: number of arguments passe
 * @argv: array of arguments passed
 *
 * Return: Always 0 (Success)

*/
int main(int argc __attribute__((unused)), char *argv[])
{
        printf("%s\n", *argv);

        return (0);
}

