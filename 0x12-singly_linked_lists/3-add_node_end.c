#include "lists.h"

/**
 * add_node_end - adds a new node
 * @head: pointer to linked list
 * @str: string
 * Return: pointer of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;

if (!str)
return (NULL);
new = malloc(sizeof(list_t));

if (!new)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
return (new);
}
