#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a binary number string.
 * Return: the converted number, or 0 in an invalid char in b or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int result = 0;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		result = 2 * result + (b[j] - '0');
	}
	return (result);

}
