#include "lists.h"

/**
 * listint_len - it print number of node
 * @h: pointer of the first node
 * Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t count, i;

	count = 0;
	for (i = 0; h != NULL; i++)
	{
		count = count + 1;
		h = h->next;
	}
	return (count);
}
