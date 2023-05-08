#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>

/**
 * read_textfile -  reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: returns the actual number of letters it could read and print
 * 0 if file cannot be opened or read
 * 0 if filename is NULL
 * 0 if write fails or does not write expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, ret_read, ret_write;
    char *buf;

    if (filename == 0)
        return (0);

    buf = malloc(letters + 1);

    if (buf == 0)
        return (0);

    fd  = open(filename, O_RDONLY);

    if (fd == -1)
        return (free(buf), 0);

    ret_read = read(fd, buf, letters);

    if (ret_read == -1)
        return (free(buf), 0);

    buf[letters] = '\0';

    ret_write = write(STDOUT_FILENO, buf, ret_read);
    if (ret_write == -1)
        return (free(buf), 0);

    free(buf);
    close(fd);
    return (ret_write);
}
