#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - function tat allocates for a buffer 1024 bytes.
 * @file: The name of the file buffer .
 *
 * Return: The newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buf;

buf = malloc(sizeof(char) * 1024);

if (buf == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buf);
}

/**
 * close_file - a function that closes file .
 * @fd: The file to be closed.
 */
void close_file(int fd)
{
int a;

a = close(fd);

if (a == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - a function that copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_to cannot be created or written to - exit code 99.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int f, tt, rr, vv;
char *buff;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buff = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
rr = read(from, buff, 1024);
tt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (f == -1 || rr == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buff);
exit(98);
}

vv = write(tt, buff, rr);
if (tt == -1 || vv == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buff);
exit(99);
}

rr = read(f, buff, 1024);
tt = open(argv[2], O_WRONLY | O_APPEND);

} while (rt > 0);

free(buff);
close_file(f);
close_file(tt);

return (0);
}