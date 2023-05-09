#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: NamvdQ
 * Q[NHVE
 * @letters: The number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 *		if the file can not be opened or read, return 0
 *		if filename is NULL return 0
 *		if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t to_read, to_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	to_read = read(fd, buffer, letters);
	if (to_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	to_write = write(STDOUT_FILENO, buffer, to_read);
	if (to_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (to_read);

}
