#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	
	int r;
	r = n % 10;	

	if (r < 0)	
	{	
		r = r * -1;	
	}	
	_putchar (48 + r);	
	return (r);
}
