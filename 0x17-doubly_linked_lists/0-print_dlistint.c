#include "lists.h"

/**
 * print_dlistint - print all element of a dlisti
 * @h: the head of  dlistint
 * Return: num of node
 */


size_t print_dlistint(const dlistint_t *h)
{
size_t i = 0;

const dlistint_t *tmp = h;

while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
i++;
}
return (i);
}
