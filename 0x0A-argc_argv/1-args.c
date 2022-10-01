#include <stdio.h>

/**
 * main - print program name
 * @argc: count number of argument
 * @argv: array of string
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, count;

	(void)argv;
	for (i = 0; i < argc; i++)
	{
		count = 0;
		count = count + i;
	}
	printf("%d\n", count);
	return (0);
}
