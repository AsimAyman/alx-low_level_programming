#include "main.h"

/**
 * read_textfile - reads a text file and prints it tothe POSIX standard output
 * @filename: pointer to text in a file
 * @letters: numbers of letters
 * Return: the actual number of letters it could read and print
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
