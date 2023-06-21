#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - gets operating function
 * @s: operator passed as argument
 *
 * Return: 0 on success
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	ops->op = s;
	i = 0;
	while (i <= 6)
	{
		ops->f = get_op_func(s);
		i++;
	}
	if (s != ops->op)
	{
		return (NULL);
	}

	return (ops->f);
}
