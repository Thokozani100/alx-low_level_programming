#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *  and returns the head node’s data (n).
 * @head: points to the first element in the linked list and delets
 *
 * Return:  elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}

