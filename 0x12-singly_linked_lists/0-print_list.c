#include "main.h"

/**
 * print_list - print number of node
 * @h: pointer to single link list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	size_t node;

	node = 0;
	while(h)
	{
		if (h -> str = '\0')
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h -> len, h -> str);
		node++;
		h = h -> next;
	}
	return (node);
}
