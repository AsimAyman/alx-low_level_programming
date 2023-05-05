#include "main.h"
/**
 * clear_bit sets the value of a bit 
 * @n: poiner to the number to change 
 * @index: of the bit to clear
 *
 * Return: 1 for success , -1 on error 
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;
	if(index>63)
		return -1;
	m =1 << indexl;
	*n =*n | m;
	return 1;
}         
