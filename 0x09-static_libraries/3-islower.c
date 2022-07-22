#include "main.h"
/**
 *_islower - displays 1 if the input is a
 *lowercase character and 0 if is and uppercase character
 *
 *@c: The character is ASCII code
 *
 *Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

