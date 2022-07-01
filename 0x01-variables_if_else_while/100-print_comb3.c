#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, k;
	
    for(i= 0; i< 9; i++)
    {
        for (k = 1; k < 10; k++)
        {
            putchar(48 +(i % 10));
            putchar(48 +k);
            if ((i % 10)== 8 && k ==9)
            {
                break;  
            }
            else{
                putchar(44);
                putchar(' ');
            }   
        }
    }
	return (0);
}