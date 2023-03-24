#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 0 to 9
 * Return: Zero value
 */

int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
putchar(x);
putchar('\n');
return (0);
}
