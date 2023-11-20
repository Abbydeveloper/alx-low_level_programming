#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: head of node
 * @index: index to insert at
 *
 * Return: 1 if succeeded
 * -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp1, *tmp2;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp2 = (*head)->next;
		free(*head);
		*head = tmp2;
		return (1);
	}

	tmp1 = *head;

	while (tmp1)
	{
		if (i == index - 1)
		{
			if (tmp1->next != NULL)
			{
				tmp2 = tmp1->next;
				tmp1->next = tmp2->next;
				free(tmp2);
				return (1);
			}
			else
				return (-1);
		}
		tmp1 = tmp1->next;
		i++;
	}

	return (-1);
}
