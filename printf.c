#include "main.h"
#include <stdlib.h>

/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int n = 0, d = 0;
	int p, r;
	va_list a;
	
	ptypes_t pr[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == 0))
	{
		return (-1);
	}
	while (format != NULL && format[n])
	{
		if (format[n] != '%')
		{
			d += _putchar(format[n]);
		}
		else
		{
			n++;
			if (format[n] == '%')
			{
				d += _putchar('%');
			}
			p = r = 0;
			while (p < 13)
			{
				if (format[n] == *(pr[p].m))
				{
					d += pr[p].f(a);
					r = 1;
					break;
				}
				p++;
			}
			if (!r && format[n] != '%')
			{
				d++;
				d++;
				_putchar('%');
				_putchar(format[n]);
			}
		}
		n++;
	}
	va_end(a);
	return (d);
}
