#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication
 * @argc: count number of argument
 * @argv: array of string
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 1)
		printf("%s\n", "Error");
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
