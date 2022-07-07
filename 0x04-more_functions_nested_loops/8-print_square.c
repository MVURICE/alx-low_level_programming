#include "main.h"

/**
 * print_square - prints hash squares.
 * @size: size of the square.
 * Return: no return.
 */
void print_square(int size)
{
	int i, m;

	for (i = 0; i < size; i++)
	{
		for (m = 0; m < size; m++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}

