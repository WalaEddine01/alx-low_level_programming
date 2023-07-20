#include "function_pointers.h"
#include "3-calc.h"
/**
 * get_op_func - returns pointer to right op func
 * @s: string iput
 * Return: the right function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{0, 0}
	};
	int i;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && s[1] == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
