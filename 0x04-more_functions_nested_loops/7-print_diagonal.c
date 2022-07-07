#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
    int i, w;
    
    if (n < 0)
    {
        _putchar('\n');
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            for (w = 0; w < i; w++)
            {
                _putchar(32);
            }
            _putchar(92);
            _putchar('\n');
        }
    }
}
