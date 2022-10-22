#include "lists.h"

/**
 * add_node - add node at the beginning
 * @head: head of linked list
 * @str: string
 * Return: address of first node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t len;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	len = strlen(str);
	newnode->next = *(head);
	*head = newnode;
	newnode->str = strdup(str);
	newnode->len = len;
	return (*head);
}
