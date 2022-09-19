#include "main.h"

/**
 * print_rev - print reverse
 * @s : string
 * Return : nothing
 */
void print_rev(char *s)
{
	int l;

	l = strlen(s);
	while (l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
