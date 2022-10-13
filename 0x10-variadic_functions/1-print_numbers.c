#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string
 * @n: unsigned int
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list l;
	unsigned int i;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(l, int));
		if (separator && i < n - 1)
		printf("%s", separator);
	}
	va_end(l);
	printf("\n");
}
