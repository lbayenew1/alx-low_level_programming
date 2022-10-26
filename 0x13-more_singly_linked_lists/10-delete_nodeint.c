#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given position
 * @head: double pointer to first node
 * @index: poisition
 * Return: pointer to insert node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prevnode;
	unsigned int i;

	prevnode = *head;
	if (index != 0)
	{
		for (i = 0; i != index; i++)
		{
			prevnode = prevnode->next;
		}
	}
	if (*head == NULL || (prevnode->next == NULL && index != 0))
		return (-1);
	tmp = prevnode->next;
	if (index != 0)
	{
		prevnode->next = tmp->next;
		free(tmp);
	}
	else
	{
		*head = tmp;
		free(prevnode);
	}
	return (1);
}
