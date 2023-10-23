#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: pointer to head of list
 * @n: member of element in list
 *
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while((*head)->next != NULL)
		*head = (*head)->next;
		
	(*head)->next = new;


	return (new);
}
