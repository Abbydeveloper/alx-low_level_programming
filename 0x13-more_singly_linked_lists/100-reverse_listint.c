#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list
 * @head: head node of list
 *
 * Return: pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	next = NULL;
	prev = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;

	}

	*head = prev;
	return (*head);
}
