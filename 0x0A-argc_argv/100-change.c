#include <stdio.h>
#include <stdlib.h>

/**
 * main - print changes
 * @argc: count argument
 * @argv: array of array
 * Return: 0 sucess and 1 unucess
 */
int main(int argc, char *argv[])
{
	int x, i;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	for (i = 0; x > 0; i++)
	{
		if (x >= 25)
			x -= 25;
		else if (x >= 10)
			x -= 10;
		else if (x >= 5)
			x -= 5;
		else if (x >= 2)
			x -= 2;
		else if (x >= 1)
			x -= 1;
	}
	printf("%d\n", i);
	return (0);
}
