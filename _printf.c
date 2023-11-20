#include "main.h"
#include <stdlib.h>
#include <unistd.h>

// int get_memory_num(char *format, char* va_list)
// {

// }
char *string_formater(char *string)
{
	(void)string;
	return ("acc");
}
/**
 * _printf - calls _printf
 * @format: char
 * @...: rest
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int counter, formatter;
	counter = formatter =  0;
	va_start(ap, format);
	while (format[counter])
	{
		if(format[counter] == '%')
		{
			formatter = formatter + 1;
		}
		else if(!formatter)
		{
			write(1, &format[counter], 1);
			formatter = 0;
		}
		counter = counter + 1;
	}

	va_start(ap, format);
	
	write(1,"\n", 1);
	va_end(ap);
	return (0);
}
