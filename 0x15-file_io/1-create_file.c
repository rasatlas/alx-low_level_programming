#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure. If filename is NULL return -1.
 *
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * If the file already exists, truncate it.
 * If text_content is NULL create an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fOpen, fWrite, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fWrite = write(fOpen, text_content, len);

	if (fOpen == -1 || fWrite == -1)
		return (-1);

	close(fOpen);

	return (1);
}
