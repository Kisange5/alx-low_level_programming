#include "main.h"

/**
 *_pow_recursion- a function that returns the value of x * y
 * @x: the character to check
 * @y: the character to check
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
