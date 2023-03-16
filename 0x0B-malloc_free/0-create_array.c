#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c){
    char *pc;
    if (size<=0)
	    return (0);

    pc = malloc(sizeof(char)*size);
    if(pc==null)
    { 
      return 0;
    }

    for(int i =0;i<size;i++){
	    {
		    *(pc+i)=c;
	    }    
	*(pc+i)='\0';
              return pc; 
}
