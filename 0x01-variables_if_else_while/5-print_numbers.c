#include <stdio.h>
/**
 * Main- A program that prints all single digit numbers of base 10
 * Description - The digit numbers are of base 10 starting form 0
 * Return: 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	{
		printf("\n");
	}

	return (0);
}