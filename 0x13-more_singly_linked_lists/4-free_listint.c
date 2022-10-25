#include "lists.h"

/**
 * free_listint - free all nodes
 * @head: point to first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *nextnode;

	temp = head;
	nextnode = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(nextnode);
		nextnode = temp;
	}
	free(temp);
}
