#include "main.h"

/**
 * read_textfile - only read fule
 * @filename: file will read
 * @letters: nums of letter to read annnnd print
 * Return: 0 when error
*/

ssize_t read_textfile(const char *filename, size_t letters)
{

int fd, readf;
int writef;
char *buf;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buf = malloc(sizeof(char) * (letters + 1));
if (!buf)
return (0);

readf = read(fd, buf, letters);
if (readf == -1)
{
free(buf);
close(fd);
return (0);
}

buf[readf] = '\0';

writef = write(STDOUT_FILENO, buf, readf);
if (writef == -1 || readf == -1)
{
free(buf);
close(fd);
return (0);
}

free(buf);
close(fd);
return (readf);
}
