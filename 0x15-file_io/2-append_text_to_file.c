#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to append to end of file
 *
 * Return: Returns: 1 on success, -1 on failure
 * Do not create the file if it does not exit
 *
 * if filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist or if you
 * do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int f, fwrite, i;

    if (filename == NULL)
        return (-1);
    f = open(filename, O_APPEND | O_RDWR, 0664);
    if (f == -1)
        return (-1);

    if (text_content != NULL)
    {
        for (i = 0; text_content[i]; i++)
            ;
        fwrite = write(file, text_content, i);
        if (fwrite == -1)
            return (-1);
    }
    close(file);
    return (1);
}
