#include "lists.h"

/**
 * free_listint2 - free all nodes
 * @head: point to first node
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nextnode, *tmp;

	nextnode = *head;
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		free(nextnode);
		nextnode = tmp;
	}
	free(tmp);
	*head = NULL;
}
