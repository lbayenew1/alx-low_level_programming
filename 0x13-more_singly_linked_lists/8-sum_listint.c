#include "lists.h"

/**
 * sum_listint - sum of all data in list
 * @head: point to first node
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	int num, i;

	num = 0;
	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		num = num + head->n;
		head = head->next;
	}
	return (num);
}
