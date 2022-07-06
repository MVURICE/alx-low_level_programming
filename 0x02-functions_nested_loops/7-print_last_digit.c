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
	int last_digit;
	if (n < 0)
	{
		n *= -1;
	}
	

    last_digit = (n % 10);
    return _putchar(48 + last_digit);
}
