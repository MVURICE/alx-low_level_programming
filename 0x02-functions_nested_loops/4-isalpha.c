#include "main.h"
/**
 * _isalpha - Shows 1 if the input is alphabetic caharacter
 * other character it  shows 0
 *
 * @c: The character to be checked
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
