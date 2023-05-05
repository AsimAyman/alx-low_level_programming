#include "main.h"
/** 
 * get_bit returns the value of a bit a given index 
 * @n: base 10 number
 * @index: index to print
 * Return: value of the bit at index index or -i if an eroor occured
 */
int et_bit(unsigend long int n, unsigend int index){
{
    if (index > 63) {
        return -1;
    }

    unsigned long int mask = 1UL << index;
    return (n & mask) ? 1 : 0;
}
