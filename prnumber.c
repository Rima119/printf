#include "main.h"
#include <stdlib.h>

/**
 * print_d - Function that prints a decimal number
 * @a: Decimal number
 * Return: The number of printed decimal numbers
 */
int print_d(va_list a)
{
	int b = va_arg(a, int);
	int c = 1, d = 0;
	unsigned int n;
	
	if (b<0)
	{
		d += _putchar('-');
		n = b * -1;
	}
	else
		n = b;
	for (; n / c > 9; )
                c *= 10;
        for (; c != 0; )
	{
		d += _putchar('0' + n / c);
		n %= c;
		c /= 10;
	}
	return (d);
}

/**
 * print_i - Function that prints a integer number
 * @a: integer number
 * Return: The number of printed integer numbers
 */
int print_i(va_list a)
{
        int b = va_arg(a, int);
        int c = 1, d = 0;
        unsigned int n;

        if (b<0)
        {
                d += _putchar('-');
                n = b * -1;
        }
        else
                n = b;
        for (; n / c > 9; )
                c *= 10;
        for (; c != 0; )
        {
                d += _putchar('0' + n / c);
                n %= c;
		c /= 10;
        }
        return (d);
}
