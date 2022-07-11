#include "main.h"

/**
 * swap_int - swaps the values of  integers.
 * @a: first integer.
 * @b: second integer.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
