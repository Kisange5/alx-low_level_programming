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
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	while (dest[i++])
	{
		len1++;
	}

	while (src[j++])
	{
		len2++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
	}
	for (j = len2; j < n; j++)
	{
		dest[i] = '\0';
	}
	return (dest);
}


