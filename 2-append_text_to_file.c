#include "main.h"

/**
 * append_text_to_file - Appends texile.
 * @filename: A pointer the file.
 * @text_content: The stri nd of the file.
 *
 * Return: If tlacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, to_write, s = 0;

	/* Checks -1 */
	if (!filename)
		return (-1);

	/* Opens file */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		/* Write  */
		while (text_content[s])
			s++;
		/* Checks if writing to */
		to_write = write(fd, text_content, s);
		if (to_write != s)
			return (-1);
	}

	close(fd);

	return (1);
}
