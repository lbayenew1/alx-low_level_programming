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
		n = (n*-1);
		return (n);
	}
}
