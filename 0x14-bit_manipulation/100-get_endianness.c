#include "main.h"

/**
 * get_endianness - checks the endianness of a system
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int value = 1;
	char *p = (char *) &value;

	if (*p == 1)
		return (1);
	else
		return (0);
}
