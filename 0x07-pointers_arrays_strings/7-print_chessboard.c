#include "main.h"

/**
  * print_chessboard - print chess board
  * @a: character
  * 8: number
  * Return: nothing
  */
void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i <= 7)
	{
		int j = 0;

		while  (j <= 7)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
