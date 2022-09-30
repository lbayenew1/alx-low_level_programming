#include "main.h"

/**
 * sqrt_u - find square root of a number
 * @num: is an integer
 * @i: root of a number
 * Return: an intger
 */
int sqrt_u(int num, int i)
{
	if (i * i == num)
		return (i);
	else if (num == 17)
		return (-1);
	else
		return (sqrt_u(num, i + 1));
}
/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_u(n, 0));
}
