#include "lists.h"

/**
 * add_nodeint_end - add node at end
 * @head: double pointer to first node
 * @n: integer
 * Return: pointer to first node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = newnode;
		newnode->n = n;
		newnode->next = NULL;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
		newnode->n = n;
		newnode->next = NULL;
		tmp = newnode;
	}
	return (*head);
}
