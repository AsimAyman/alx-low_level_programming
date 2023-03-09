#include "main.h"
/**
 * _strlen_strlen_recursion - Return the length of the string.
 * @s: the string to b measured.
 * Retrun: the length of the string.
 */
int _strlen_recursion(char *s)
{
	int len =0;
	if(*s)
	{
	   len++;
           len+=strlen_recursion(s+1);
	}
	return(len);
}
