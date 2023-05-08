#include "main.h"


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
ssize_t file, fread, fwrite;
char *totalSize;

totalSize = malloc(sizeof(char) * letters);

if (totalSize == NULL)

return (0);

if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);

if (file == -1)

return (0);

fread = read(file, totalSize, letters);

if (fread == -1)
return (0);

fwrite = write(STDOUT_FILENO, totalSize, fread);
if (fwrite == -1)
return (0);

close(file);

free(totalSize);

return (fwrite);

}
