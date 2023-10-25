#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the codee
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 5, 4096);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 0, 33);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 8, 44);
	print_listint(head);
	printf("-----------------\n");
	insert_nodeint_at_index(&head, 11, 89);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
