#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - delete head node of a listint_t linked list
 * and return the head node's data (n)
 * @head: head node
 *
 * Return: the head node's data (n)
 * or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
