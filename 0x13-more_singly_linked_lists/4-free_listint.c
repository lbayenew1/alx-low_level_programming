#include "lists.h"

/**
 * free_listint - free all nodes
 * @head: point to first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nextnode;

	nextnode = head;
	while (head->next != NULL)
	{
		nextnode = nextnode->next;
		free(head);
		head = nextnode;
	}
	free(head);
}
