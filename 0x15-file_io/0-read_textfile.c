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
	int fd;
	ssize_t r, w;
	char *buff;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	rd = read(fd, buff, letters);
	if (r == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}
	close(fd);
	w = write(STDOUT_FILENO, buff, r);
	if (w == -1)
	{
		free(buff);
		return (0);
	}
	if (w != r)
		return (0);
	return (r);
}
