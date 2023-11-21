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
	counter = flag = len = 0;
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
				write(1, va_arg(ap, char *), strlen(va_arg(ap, char *)));
				break;
			case 'c':
				c = va_arg(ap, int);
				_putchar(c);
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
				len = len - 1;
				break;
			}
			counter = counter + 1;
		}
		else if (format[counter] == '\\')
		{
			printf("FLAG");
			flag = flag + 1;
			break;
		}
		else
		{
			_putchar(format[counter]);
			counter = counter + 1;
			flag = 0;
		}
	}
	va_end(ap);
	len = len + strlen(format);
	return (len);
}
