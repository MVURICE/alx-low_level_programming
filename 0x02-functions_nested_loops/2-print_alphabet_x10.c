#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int k, i;

	for (k = 0; k < 10; k++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
