#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 * @head: double pointer to first node
 * @idx: poisition
 * @n: integer
 * Return: pointer to insert node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	tmp = *head;
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i != idx; i++)
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	newnode->n = n;
	tmp->next = newnode;
	return (newnode);
}
