#include "main.h"
#include <stdlib.h>

/**
 * print_c - function that prints a character
 * @a: the character
 * Return: 1
 */

int print_c(va_list a)
{
	int m = va_arg(a, int);
	
	_putchar(m);
	return (1);

}

/**
 * print_s - function that prints a string
 * @a: the string
 * Return: number of printed characters
 */

int print_s(va_list a)
{
	int n;
	char *m = va_arg(a, char *);

	if (m == NULL)
	{
		m = "(null)";
	}
	for (n = 0; m[n]; n++)
	{
		_putchar(m[n]);
	}
	return (n);
}
