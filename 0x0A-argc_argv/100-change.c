#include <stdio.h>
#include <stdlib.h>


/**
 * main - print the minimum num
 * @argc:* @argc: counter of argument
 * @argv: value of argument
 * Return: 0
 */


int main(int argc, char *argv[])
{
if (argc == 2)
{

int q, least = 0, mone = atoi(argv[1]);
int cen[] = {25, 10, 5, 2, 1};
for (q = 0; q < 5; q++)
{
if (mone >= cen[q])
{
least += mone / cen[q];
mone = mone % cen[q];
if (mone % cen[q] == 0)
{
break;
}
}
}
printf("%d\n", least);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

