#include "main.h"

/**
 * create_file - function that  creates a file.
 * @filename: the name of the file .
 * @text_content: A string to write to the file.
 *
 * Return:1 on success.
 *         -1 on failure.
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
		w = write(d, text_content, lenth);

		if (d == -1 || vv == -1)
			return (-1);

		close(d);

		return (1);
}
