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
    int f, fwrite, j;

    if (f == NULL)
        return (-1);
    f = open(f, O_APPEND | O_RDWR, 0664);
    if (file == -1)
        return (-1);

    if (text_content != NULL)
    {
        for (j = 0; text_content[j]; j++)
            ;
        fwrite = write(f, text_content, j);
        if (fwrite == -1)
            return (-1);
    }
    close(f);
    return (1);
}
