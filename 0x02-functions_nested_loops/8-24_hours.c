#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 *
 * Return: no return
 */
void jack_bauer(void){

    int min, min1, hr1, hr;

    for (hr1 = 0; hr1 < 3; hr1++)
    {
        for (hr = 0; hr < 4; hr++)
        {
            for (min1 = 0; min1 < 6; min1++)
            {
                for (min = 0; min < 10; min++)
                {
                    _putchar(48 + hr1);
                    _putchar(48 + hr);
                    _putchar(58);
                    _putchar(48 + min1);
                    _putchar(48 + min);
                    _putchar('\n');
                }
            }
        }
        
    }
    
}
