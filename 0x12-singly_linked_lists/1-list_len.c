#include "lists.h"

/**
 * list_len - print number of node
 * @h: pointer to single link list
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
