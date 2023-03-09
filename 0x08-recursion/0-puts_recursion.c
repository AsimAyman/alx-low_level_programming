#include "main.h"
/** 
 * _puts_recursion - prints a string followed by a new line 
 * @s: string 
 * Return: On success 1.
 * ON error, -1 is returned, and error is set appropiately.
 */
void _puts_recursion(char *s)
{
	if (*s ==0)
	{
		_putcha('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s+1);
}
