#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints sum of positive num
 * @argc: counter of argument
 * @argv: value of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{

char *a;
int sum = 0;

while (--argc)
{

for (a = argv[argc]; *a; a++)

if (*a < '0' || *a > '9')
{
printf("Error\n");
return (1);
}

sum += atoi(argv[argc]);
}


printf("%d\n", sum);
return (0);
}
