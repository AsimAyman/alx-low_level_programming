#include "main.h"
/**
 * set_bit- give a bit at a index to 1
 * @n: pointer to the number to change
 * @index: of the bit to set to 1
 *
 * Return:1 when success and -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

