#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * format_function - calls format_function
 * @format: format
 * @counter: int
 * @ap: va_list
 * @p: int
 * Return: int
 */

void format_function(const char *format, int counter, va_list ap, int *p)
{
	int d;

	switch (format[counter])
	{
	case 's':
		w_str(ap, p);
		break;
	case 'c':
		w_char(ap, p);
		break;
	case 'd':
		d = va_arg(ap, int);
		w_double(d, p);
		break;
	case 'i':
		d = va_arg(ap, int);
		w_double(d, p);
		break;
	case '%':
		_putchar('%');
		*p = *p + 1;
		break;
	default:
		_putchar('%');
		_putchar(format[counter]);
		*p = *p + 2;
	}
}
