#include "main.h"
void _put(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

