#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: double pointer to first node
 * Return: data of first node
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *firstnode;

	if (**head == NULL || *head == NULL)
		return (0);
	firstnode = *head;
	x = firstnode->n;
	*head = firstnode->next;
	free(firstnode);
	return (x);
}
