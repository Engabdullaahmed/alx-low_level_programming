#include "main.h"
#include <string.h>

/**
 * *_strdup -  function that returns a pointer
 * @str: a pointer of string
 * Return: 0
 */

char *_strdup(char *str)
{

char *str_new;


if (str == NULL)
{
return (0);
}


str_new = (char *) malloc(strlen(str) + 1 * sizeof(char));

if (str_new == 0)

{
return (NULL);
}

strcpy(str_new, str);

return (str_new);
}
