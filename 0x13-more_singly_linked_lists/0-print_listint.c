#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
