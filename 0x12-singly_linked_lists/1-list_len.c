#include "list.h"

/**
 * list_len - len of linked
 * @h: first nod of pointer
 * Return: size list
 */

size_t list_len(const list_t *h)
{

size_t q = 0;

while (h)
{
h = h->next;
q++;
}
return (q);
}
