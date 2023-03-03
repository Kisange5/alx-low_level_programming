#include "main.h"

/**
 * _strncpy - copies n items to dest string
 * @src: the string that is copied
 * @dest: the string copied to
 * @n: number of items to copy
 * Return:dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;
	int len = 0;

	while (src[j++])
	{
		len;
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	for (j = len; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}


