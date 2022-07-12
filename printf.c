#include "main.h"
#include <stdlib.h>

/**
 * format_specifier - function that checks a format specifier
 * @format: format specifier
 * Return: pointer to function
 */

static int (*format_specifier(const char *format))(va_list)
{
	unsigned int n;
	ptypes_t pr[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	for (n = 0; pr[n].m != NULL; n++)
	{
		if (*(pr[n].m) == *format)
		{
			break;
		}
	}
	return (pr[n].f);
}

/**
 * _printf - function that produces output according to a format.
 * @format: a character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list a;
	int (*f)(va_list);
	unsigned int n = 0, d = 0;

	if (format == NULL || (format[0] == '%' && format[1] == 0))
	{
		return (-1);
	}
	va_start(a, format);
	while (format != NULL && format[n])
	{
		for (; format[n] != '%' && format[n]; n++)
		{
			_putchar(format[n]);
			d++;
		}
		if (!format[n])
			return (d);
		f = format_specifier(&format[n + 1]);
		if (f != NULL)
		{
			d += f(a);
			n += 2;
			continue;
		}
		if (!format[n + 1])
		{
			return (-1);
		}
		_putchar(format[n]);
		d++;
		if (format[n + 1] == '%')
		{
			n += 2;
		}
		else
			n++;
	}
	va_end(a);
	return (d);
}
