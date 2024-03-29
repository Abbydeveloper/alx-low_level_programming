#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a listint_t list
 * @head: head node of list
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
