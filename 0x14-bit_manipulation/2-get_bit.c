#include "main.h"


/**
 * get_bit -  returns the value of a bit at a given index
 * @n: integer to be used
 * @index: used to get the value
 * Return: index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
int base = 1;
int ans;

if (index > 32)
return (-1);
base = base << index;
ans = n & base;
if (ans > 0)
return (1);
return (0);
}
