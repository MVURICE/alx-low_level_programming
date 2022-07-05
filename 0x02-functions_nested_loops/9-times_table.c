#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{

    int i, k, w;
    for (k =0 ; k <10 ;k++)
    
    {
        for(i =0; i < 10 ; i ++)
        {
            w = k*i;
            if ((w) > 9)
            {
                if (i == 9)
                {

                    _putchar((w / 10) +48);
                    _putchar((w % 10) +48);
                    
                }
                else
                {
                _putchar((w / 10) +48);
                _putchar((w % 10) +48);
                _putchar(',');
                _putchar(' ');
                }

            }
            else
            {
                if (i == 9)
                {
                   _putchar(' ');
                   _putchar((w)+ 48); 
                }
                else
                {
                _putchar(' ');    
                _putchar((w)+ 48);
                _putchar (',');
                _putchar(' ');
                }
            
            
            }
        }
        _putchar('\n');
    }
}

