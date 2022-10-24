#include "lists.h"

/**
 * print_listint - it print number of node
 * @h: pointer of the first node
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t count, i;

	count = 0;
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		count = count + 1;
		h = h->next;
	}
	return (count);
}
