#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints multiplies two numbers
 * @argc: counter of argument
 * @argv: value of argument
 * Return: 0
 */
int main(int argc, char **argv)
{

int multi = 0;

if (argc == 3)
{
multi = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", multi);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
