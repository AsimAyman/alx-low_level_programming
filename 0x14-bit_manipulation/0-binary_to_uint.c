#include "main.h"


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: Converted number or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int res = 0, currentBit;
int l = 0;

if (b == 0)
{
return (0);
}
while (b[l] != 0)
{
if (b[l] != '1' && b[l] != '0')
{
return (0);
}
l++;
}
l--;
for (int i = 0; l >= 0; i++, l--)
{
if (b[i] == '1')
{
currentBit = 1;
}
else
{
currentBit = 0;
}
currentBit = currentBit << l;
res += currentBit;
}
return (res);
}
