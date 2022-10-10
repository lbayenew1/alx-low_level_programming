#include <stdio.h>

/**
 * main - excute fil name
 * Return: 0
 */

int main(void)
{
	char s[] = __FILE__;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\n');
	return (0);
}
