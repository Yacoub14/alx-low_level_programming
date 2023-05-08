#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that read text file and print it to STDOUT.
 * @filename: text file name
 * @letters: number of letters should be read
 * Return: w- actual number of letters  printed and readed
 *        return:0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *f;
ssize_t d;
ssize_t vv;
ssize_t te;

d = open(filename, O_RDONLY);
if (d == -1)
return (0);
f = malloc(sizeof(char) * letters);
te = read(d, f, letters);
vv = write(STDOUT_FILENO, f, te);

free(f);
close(d);
return (vv);
}
