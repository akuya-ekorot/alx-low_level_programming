#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * do not create the file if it doesn't exist.
 *
 * if filename is NULL return -1
 *
 * if text_content is NULL, do not add anything to the file...
 * return 1 if the file exists and -1 if the file does not exist
 * or if no permission to write the file
 *
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);

	if (fd == -1)
		return (-1);

	bytes = 0;

	while (text_content && text_content[bytes])
		bytes++;

	written = write(fd, text_content, bytes);

	if (written == -1)
		return (-1);

	return (1);
}
