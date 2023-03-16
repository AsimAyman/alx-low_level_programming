#include "main.h"
#include <stdlib.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
	char *ps[];
	if(str ==null)
		return (0) ;
	ps= malloc(sizeof(char)*strln(str));
	if(ps==0)
		return (0);
	for(int i =0;i<strln(str);i++)
		s[i]= (*str+1);

	return ps;
}
