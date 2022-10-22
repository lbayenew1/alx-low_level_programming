#include "lists.h"

/**
 * free_list - free all allocated
 * @head: pointer to linked list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp)
	{
		free(tmp->str);
		free(tmp);
		tmp = tmp->next;
	}
	free(tmp);
}
