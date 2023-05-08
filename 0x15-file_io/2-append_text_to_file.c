#include "main.h"

/**
 * append_text_to_file - function that appends a text at the end of a file.
 * @filename: the file’s name .
 * @text_content: The string should append to the end of the file.
 *
 * Return: 1 pn success.
 *        -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int u, vv, l = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}

u = open(filename, O_WRONLY | O_APPEND);
vv = write(u, text_content, l);

if (u == -1 || vv == -1)
return (-1);

close(u);

return (1);
}
