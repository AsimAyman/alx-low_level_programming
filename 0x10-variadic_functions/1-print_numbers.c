#include <stdarg.h>
#include "variadic_function.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: String to be printed between numbers
 * @n: number of variadic arguments
 * @...: Arguments Variadic
 *
 * Return: No return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
	va_list list;
        if(n==0){
		printf("\n");
		return ;
	}
	if(separator==0){
		separator ="";
	va_start(list,n);
	for(i=0;i<n;i++)
		printf("%d%s,va_arg(list,int),separator);
	printf("%d\n",va_arg(list,int));
	va_end(list);
	
