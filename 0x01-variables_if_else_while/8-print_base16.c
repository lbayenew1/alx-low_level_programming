#include <stdio.h>

/**
 * main - print base 16
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	int i;

	for ( i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (ch='a'; ch<='z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
