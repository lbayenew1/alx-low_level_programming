#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: point to first node
 * @index: nth node
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	tmp = head;
	for (i = 0; i != index; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
