#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add node to head of list
 * @head: pointer to head of list
 * @n: member of element in list
 *
 * Return: list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
