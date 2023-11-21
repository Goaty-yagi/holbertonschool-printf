#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct what_format - Structure used to match specifier with corresponding
 * function
 *
 * @formatz: String to be printed
 * @f: Function pointer for which specifier to be used
 *
 */

typedef struct what_format
{
	const char *formatz;
	int (*f)(va_list args);
} what_format;

int w_char(va_list args);
int  w_str(va_list args);
int w_percent(va_list args);
int w_double(va_list args);
int w_integer(va_list args)
int _printf(const char *format, ...);
int _putchar(char c);

#endif
