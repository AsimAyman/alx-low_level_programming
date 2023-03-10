#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point to print all arg we have 
 * @argc: the arg cont 
 * @argv: the pointer of list of the string args we have.
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv)
{
	for(int i =0;i<argc;i++)
	{
	 print("%s",argv[i]);
	}
	return(0);
}
