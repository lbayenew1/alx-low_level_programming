#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perfom
 * @s: operator as argument
 * Return: a ponter to parameter
 */

int (*get_op_func(char *s))(int, int)
{
	p_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s == ops[i].op)
			return (ops[i].f);
	}
	return (NULL);
}
