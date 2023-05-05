#include "main.h"
/** 
 * get_bit returns the value of a bit a given index 
 * @n: base 10 number
 * @index: index to print
 * Return: value of the bit at index index or -i if an eroor occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
