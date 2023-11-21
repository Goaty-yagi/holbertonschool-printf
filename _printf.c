#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * w_double - calls w_double
 * @i: int
 * Return: void
 */

void w_double(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		w_double(i / 10);
	}
	_putchar(i % 10 + 48);
}

/**
 * _printf - calls _printf
 * @format: char
 * @...: rest
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int counter, flag, d, len;
	char c;
	char *s;
	counter = flag = len = 0;
	if (!format)
	{
		return (-1);
	}
	va_start(ap, format);
	while (format[counter])
	{
		if (flag)
		{
			write(1, &format[counter], 1);
		}
		else if (format[counter] == '%')
		{
			counter = counter + 1;
			switch (format[counter])
			{
			case 's':
				s = va_arg(ap, char *);
				if (s)
				{
					write(1, s, strlen(s));
					len = len + strlen(s);
				}
				else
				{
					write(1, "(null)", 6);
					len = len + 6;
				}
				break;
			case 'c':
				c = va_arg(ap, int);
				_putchar(c);
				len = len + 1;
				break;
			case 'd':
				d = va_arg(ap, int);
				w_double(d);
				break;
			case 'i':
				d = va_arg(ap, int);
				w_double(d);
				break;
			case '%':
				_putchar('%');
				len = len + 1;
				break;
			default:
				_putchar('%');
				_putchar(format[counter]);
				len = len + 2;
			}
			counter = counter + 1;
		}
		else if (format[counter] == '\\')
		{
			flag = flag + 1;
			break;
		}
		else
		{
			_putchar(format[counter]);
			counter = counter + 1;
			flag = 0;
			len = len + 1;
		}
	}
	va_end(ap);
	return (len);
}
