#include <main.h>
#include <stdlib.h>
#include <string.h>
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
