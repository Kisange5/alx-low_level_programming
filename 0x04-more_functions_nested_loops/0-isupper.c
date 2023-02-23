#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper -> a function that checks for uppercase character.
 * @c: is the char to be checked
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

