#include <stdio.h>

/**
 * main - Prints num of argu
 * @argc: counter of argument
 * @argv: value of argument
 * Return: 0
 */

int main(int argc, char const *argv[])
{
(void)argc;

printf("%d\n", argv[argc - 1]);

return (0);
}
