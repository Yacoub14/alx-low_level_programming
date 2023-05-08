#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename:the name of the file to create.
 * @text_content: string to write to the file.
 *
 * Return: If the function fails - -1.
 *         failure - 1.
 */

int create_file(const char *filename, char *text_content)
{
int d, vv, lenth = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (lenth = 0; text_content[lenth];)
lenth++;
}

d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
vv = write(d, text_content, lenth);

if (d == -1 || vv == -1)
return (-1);

close(d);

return (1);
}
