#include "main.h"


/**
 * append_text_to_file - show end of file
 * @filename: pointer to name of file
 * @text_content: txt of file
 * Return: 1 if success -1 if no success
 */

int append_text_to_file(const char *filename, char *text_content)
{

int openf, wrief;

int len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

openf = open(filename, O_WRONLY | O_APPEND);
writef = write(o, text_content, len);

if (openf == -1 || writef == -1)
return (-1);

close(openf);
return (1);
}
