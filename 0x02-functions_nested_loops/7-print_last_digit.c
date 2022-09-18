#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print last digit
 * @n: n is an integer
 * Return: int
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
