#include "main.h"

/**
 * leet - a function that encodes a string to 1337
 * @a and @A: should be replaced by 4
 * @e and @E: should be replaced by 3
 * @o and @O: should be replaced by 0
 * @t and @T: should be replaced by 7
 * @l and L: should be replaced by 1
 * Return: leet_str
 */
char *leet(char *)
{
	int i = str *i;
	int j = str *j;
	char leet_str;

	for ('i' = 0, 'j' = 0; str[i] != '\0'; i++, j++)
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

