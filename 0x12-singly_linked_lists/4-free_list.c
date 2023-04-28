#include "lists.h"
/**
 * free_list - frees list
 * @head: pointer start the list
 * Return: void
 */

void free_list(list_t *head)
{
list_t *curnode, *next;

curnode = head;
while (curnode != NULL)
{
next = curnode->next;
free(curnode->str);
free(curnode);
curnode = next;
}
}
