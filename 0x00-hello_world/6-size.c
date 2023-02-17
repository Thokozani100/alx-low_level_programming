#include<stdio.h>


/**
 * main - Entry point
 *
 * Return: Always  0 (Success)
 */
int main(void)
{
	int A;
	long int B;
	long long int C;
	char D;
	float F;

	printf("Size of a int: %lu 4 byte(s)\n", (unsigned long)sizeof(A));
	printf("Size of a long int: %lu 4 byte(s)\n", (unsigned long)sizeof(B));
	printf("Size of a long long int: %lu 8 byte(s)\n", (unsigned long)sizeof(C));
	printf("Size of a char : %lu 1 byte(s)\n", (unsigned long)sizeof(D));
	printf("Size of a float: %lu 4 byte(s)\n", (unsigned long )sizeof(F));
	return (0);
}	
