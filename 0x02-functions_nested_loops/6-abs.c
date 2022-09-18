#include "main.h"
#include <stdio.h>

/**
 * _abs - all are positive number
 * @n: character
 * Return: positive number
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
