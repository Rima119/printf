#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct ptypes - struct for choosing the right function depending
 * on the format specifier passed to printf function
 * @m: format specifier
 * @f: pointer to function
 */

typedef struct ptypes
{
	char *m;
	int (*f)(va_list);

} ptypes_t;


int _printf(const char *format, ...);
int print_c(va_list a);
int print_s(va_list a);
int print_d(va_list a);
int print_i(va_list a);
int _putchar(char c);

#endif /* MAIN.H */
