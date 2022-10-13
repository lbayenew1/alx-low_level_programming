#include "variadic_functions.h"

/**
 * sum_them_all - sum argument
 * @n: unsigned integer
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i;
	int sum;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(s, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(s, int);
	va_end(s);
	return (sum);
}
