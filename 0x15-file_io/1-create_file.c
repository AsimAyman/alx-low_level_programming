#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file cannot be created, written,
 * etc.). The created file must have permissions rw-------.
 * If the file already exists, do not change its permissions.
 * If filename is NULL, return -1. If text_content is NULL, create an empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, check_write, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length] != '\0')
			length++;
		check_write = write(fd, text_content, length);

		if (check_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
