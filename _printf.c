#include "main.h"
/**
 * _printf - calls _printf
 * @format: char
 * @...: rest
 * Return: length of format
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int counter, len;

	counter = len = 0;
	if (!format)
	{
		return (-1);
	}
	va_start(ap, format);
	while (format[counter])
	{
		if (format[counter] == '%')
		{
			if (strlen(format) == 1)
			{
				return (-1);
			}
			counter = counter + 1;
			format_function(format, counter, ap, &len);
			counter = counter + 1;
		}
		else
		{
			_putchar(format[counter]);
			counter = counter + 1;
			len = len + 1;
		}
	}
	va_end(ap);
	return (len);
}
