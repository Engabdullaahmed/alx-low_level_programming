#include "lists.h"

/**
 * add_node - add nod start list
 * @head: address
 * @str: field of node
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *new = malloc(sizeof(list_t));

if (!new || !head)
return (NULL);

if (str)
{
new->str = strdup(str);

if (!new->str)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
}
new->next = *head;
*head = new;
return (new);
}
