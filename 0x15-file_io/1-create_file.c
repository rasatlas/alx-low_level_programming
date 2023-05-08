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
	int output = 0;
	int file = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + x) != '\0')
		{
			i++;
		}
		output = write(file, text_content, i);
	}
	if (output == -1 && output != i)
		return (-1);
	return (1);
}
