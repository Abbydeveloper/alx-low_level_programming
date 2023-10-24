#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: head node of list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
