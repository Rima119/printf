#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_b - function that prints a binary number
 * @a:Binary number
 * Return: The number of printed binary numbers
 */
void print_b(va_list a)
{
	unsigned int m = va_arg(a, int);
	int n, *s;
	char *c, *b;
	char *d;

	c = "01";
	d = malloc(33 * sizeof(char));
	if (d == NULL)
	{
		return;
	}
	if (m == 0)
	{
		b[*s] = '0';
		*s += 1;
	}
	else
	{
		for (n = 0; m != 0; n++)
		{
			d[n] = c[m % 2];
			m /= 2;
		}
		for (n--; n >= 0; *s += 1, n--)
		{
			b[*c] = d[n];
		}
	}
	free(d);
}
