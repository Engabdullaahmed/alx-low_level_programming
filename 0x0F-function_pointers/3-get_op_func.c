#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - choise the correct operator
 * @s: oprator
 * Return: 0
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
if (strcmp(s, ops[i].op) == 0)
break;
}
return (ops[i].f);
}
