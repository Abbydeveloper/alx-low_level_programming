#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: head node of list
 * @str: new string to add to list
 *
 * Return: pointer to list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *temp;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	new_list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	new_list->str = strdup(str);
	new_list->len = i;
	new_list->next = NULL;

	if (*head == NULL)
	{
		*head = new_list;
		return (new_list);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new_list;

	return (new_list);
}
