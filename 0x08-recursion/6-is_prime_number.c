#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if prime or no
 * @n: int
 * @val: int
 * Return: 0 or 1
 */

int check_primee(int n, int val);
int is_prime_number(int n)
{
return (check_primee(n, 2));
}

/**
 * check_primee - check if prime or no
 * @n: int
 * @val: int
 * Return: 0 or 1
 */
int check_primee(int n, int val)
{

if (val >= n && n > 1)
return (1);
else if (n % val == 0 || n <= 1)
return (0);
else
return (check_prime(n, val + 1));
}
