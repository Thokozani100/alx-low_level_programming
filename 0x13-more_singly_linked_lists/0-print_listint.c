#include "lists.h"

/**
 * print_listinit - print all element on the  print_listinit
 * Return: number of nodes
 * linked - the list with 0.main.c
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
			number++;
		h = h->next;
	}

return (number);
}

