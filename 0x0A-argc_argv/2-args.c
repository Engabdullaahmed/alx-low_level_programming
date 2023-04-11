#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: counter of argument
 * @argv: value of argument
 * Return: 0
 */
int main(int argc, char **argv)
{

int p = 0;

while (argc--)
{
printf("%s\n", argv[p]);
p++;

}

return (0);
}
