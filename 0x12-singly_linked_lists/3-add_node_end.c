#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: head of linked list
 * @str: string
 * Return: address of first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
	size_t len;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	len = strlen(str);
	newnode->len = len;
	newnode->next = NULL;
	newnode->str = strdup(str);
	tmp = *head;
	if (tmp == NULL)
		*head = newnode;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnode;
	}
	return (*head);
}
