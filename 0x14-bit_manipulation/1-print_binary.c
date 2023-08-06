#include "main.h"



/**
 * print_binary - prints the binary representation of a number
 * @n: base 10 number
 * Return: No return
 */
void print_binary(unsigned long int n)
{
unsigned long int l = 0x8000, i = 0;
for (i = 0; i < 16; i++)
{
if (n & (l >> i))
{
_putchar('1');
}
else
{
_putchar('0');
}
}
}
