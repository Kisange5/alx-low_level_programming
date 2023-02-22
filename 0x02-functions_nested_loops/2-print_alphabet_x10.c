#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char letter;

	int k;

	k = 0;
	while (k < 10)
	{
		letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
		}
		_putchar('\n');
		k++;
		}
}

