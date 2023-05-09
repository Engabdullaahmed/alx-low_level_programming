#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_file - create file
 * @filename: pointer name of file
 * @text_content: string pointer
 * Return: fail -1
 */


int create_file(const char *filename, char *text_content)
{

int openf;
int writef;

int len = 0;

if (!filename)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len]; len++)
	;
}
openf = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
writef = write(openf, text_content, len);


if (openf == -1 || writef == -1)
return (-1);

close(openf);
close(writef);

return (1);
}
