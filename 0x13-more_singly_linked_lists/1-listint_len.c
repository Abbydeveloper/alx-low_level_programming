#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the number of elements of a listint_t list
 * @h: head of list
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
