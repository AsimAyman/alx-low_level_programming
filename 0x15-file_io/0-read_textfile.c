#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and outputs its contents to the standard output
 * @filename: name of the file to read
 * @letters: number of bytes to read from the file
 *
 * Return: number of bytes printed to standard output, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL) {
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL) {
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1) {
		free(buffer);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1) {
		free(buffer);
		close(fd);
		return (0);
	}
	
	if (n_read == 0) {
		close(fd);
		free(buffer);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	
	if (n_written == -1 || n_written != n_read) {
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (n_written);
}
