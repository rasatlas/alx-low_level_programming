#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: pointer pointing to name of a file/
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, size, wr;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(text);
		return (0);
	}

	size = read(fd, text, letters);
	wr = write(STDOUT_FILENO, text, size);

	close(fd);

	return (wr);
}
