#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * The number 2 and number 4 will not be printed
 * Return: no return.
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
