#include <stdio.h>
#include <stdlib.h>

/**
 * main - print multiplication
 * @argc: count number of argument
 * @argv: array of string
 * Return: 0 for success 1 unsuccess
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *str;
			int j;

			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("%s\n", "Error");
					return (1);
				}
			}
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
