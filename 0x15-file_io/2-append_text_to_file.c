#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure.
 * Do not create the file if it does not exist. If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file. Return 1.
 * If the file exists and -1 if the file does not exist or if you do not
 * have the required permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int output;
	int i;

	file = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
	return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + i) != '\0')
		i++;
	output = write(file, text_content, i);
	if (output == -1)
		return (-1);
	return (1);
}
