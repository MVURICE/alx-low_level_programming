#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the sum of the argument only if they are digits
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if no errors, 1 if invalid argument
 */

int main(int argc, char *argv[])
{
	int i, k, sum = 0;


	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k]; k++)
		{
			if (argv[i][k] < '0' || argv[i][k] > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
