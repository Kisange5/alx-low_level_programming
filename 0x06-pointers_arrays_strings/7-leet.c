#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * leet - encodes a string into 1337.
 * @str: the input string to encode
 *
 * Return: a newly allocated string containing the encoded version of str,
 *         or NULL if an error occurs
 */
char *leet(char *str)
{
	int i, j;
	char *leet_str;

	if (str == NULL)
		return (NULL);

	leet_str = malloc(sizeof(char) * (strlen(str) + 1));
	if (leet_str == NULL)
		return (NULL);

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			leet_str[j] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			leet_str[j] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			leet_str[j] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			leet_str[j] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			leet_str[j] = '1';
		else
			leet_str[j] = str[i];
	}
	leet_str[j] = '\0';
	return (leet_str);
}
