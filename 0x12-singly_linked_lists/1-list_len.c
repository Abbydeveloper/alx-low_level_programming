#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: head node of list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
