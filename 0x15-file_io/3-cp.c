#include "main.h"


char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes
 * @file: name of file buffer
 * Return: A pointer to allocated
 */

char *create_buffer(char *file)
{
char *buf;

buf = malloc(sizeof(char) * 1024);

if (!buf)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buf);
}

/**
 * close_file - Closes file
 * @fd: The file to be closed.
 */

void close_file(int fd)
{
int closef;

closef = close(fd);

if (closef == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The num of argu of program
 * @argv: An array of pointer
 * Return: 0 if success
  */
int main(int argc, char *argv[])
{
int from, to, readf, writef;
char *buf;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buf = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
readf = read(from, buf, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || readf == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buf);
exit(98);
}

writef = write(to, buf, readf);
if (to == -1 || writef == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buf);
exit(99);
}

readf = read(from, buf, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (readf > 0);

free(buf);
close_file(from);
close_file(to);

return (0);
}
