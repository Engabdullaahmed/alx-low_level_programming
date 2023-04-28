#include "lists.h"

/**
 * _strlen - len of string
 * @s: the string
 * Return: len of str
 */

int _strlen(char *s)
{
int x = 0;

if (s == NULL)
return (0);

while (*s++)
x++;
return (x);
}


/**
 * print_list - linked list
 * @h: first node the declare from pointer
 * Return: list size
 */

size_t print_list(const list_t *h)
{

size_t q = 0;
while (h)
{
printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
h = h->next;
q++;
}
return (q);
}
