#include "main.h"

/**
 * swap_int - swap resukt
 * @a: integer
 * @b: integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

