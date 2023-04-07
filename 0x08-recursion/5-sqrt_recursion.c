#include "main.h"

/**
 * _sqrt_recursion - find squaure root
 * @n: int
 * @val: squate root
 * Return: int
 */
int _sqrt_recursion(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find root of square
 * @n: int
 * @val: root square
 * Return: int
 */

int square(int n, int val)
{
if (val * val == n)
{
return (val);
}
else if (val * val < n)
{
return (square(n, val + 1));
}
else
return (-1);
}
