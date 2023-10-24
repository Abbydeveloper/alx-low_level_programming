#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of node
 * @idx: index to insert at
 * @n: data of new node
 *
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *new;
	unsigned int i = 0;

	tmp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		while (tmp)
		{
			if (i == idx)
			{
				new->n = n;
				new->next = tmp->next;
				tmp->next = new;
				break;
			}
			tmp = tmp->next;
			i++;
		}
	}

	if (i != idx)
		return (NULL);
	return (tmp);
}
