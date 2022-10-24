#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 * @head: point to first head
 * @n: integer
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		*head = newnode;
		newnode->next = NULL;
		newnode->n = n;
	}
	else
	{
		newnode->next = *head;
		newnode->n = n;
		*head = newnode;
	}
	return (*head);
}
