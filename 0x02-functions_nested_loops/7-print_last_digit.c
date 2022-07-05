#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int i)
{
    int last_digit;
    if (i < 0)
    {
        i *= -1;
    }
    last_digit = _putchar( 48 + (i % 10));

    return last_digit;
}

