#include "variadic_functions.h"

/**
 * print_strings - print a string
 * @separator: string
 * @n: unsigned integer
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;
	char *str;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(l, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i < n - 1)
			printf(",");
	}
	printf("\n");
	va_end(l);
}
