#include "3-calc.h"

/**
  * get_op_func - func selects the correct func to perform operatn
  * @s: operator passed as argument
  *
  * Return: pointer that corresponds to operator
  * or NULL if operator is wrong
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

	for (i = 0; i < 5; i++)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
	}
	return (NULL);
}
