#include "main.h"

/**
 * _isupper - checks if c is an uppercase character.
 * @c: input character.
 * Return: 1 if is an uppercase character,0in other case.
 */
int _isupper(int c)
{
	if ((c > 64) &&( c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
