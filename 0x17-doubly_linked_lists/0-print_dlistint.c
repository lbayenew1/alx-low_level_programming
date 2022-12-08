#include "lists.h"
/**
 * print_dlistint - print number on double linked list
 * and return number of elements
 * @h: head of double linked list
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
