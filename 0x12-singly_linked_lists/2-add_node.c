#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: head node of list
 * @str: new string to add to list
 *
 * Return: pointer to list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = i;
	temp->next = *head;
	*head = temp;

	return (*head);
}
