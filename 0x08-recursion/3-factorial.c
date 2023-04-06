#include "main.h"

/**
 * factorial - count fact
 * @n: int
 * Return: -1 of 1 of fact
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
