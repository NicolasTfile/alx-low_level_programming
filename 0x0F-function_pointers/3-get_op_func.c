#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - get ops function pointer of type char array
 *               that accepts two inputs of int data type
 *
 * @s: a character pointer pointing to a symbol from the program argument
 *
 * Return: one of the operator functions to perform calculations
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);

		i++;
	}

	return (0);
}
