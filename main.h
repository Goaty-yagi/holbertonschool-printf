#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct fs - Struct fs
 *
 * @fs: format specifier
 * @f: function associated
 */
typedef struct fs
{
	char fs;
	void (*f)(va_list ap, int *b);
} fs_t;

int _putchar(char c);
int _printf(const char *format, ...);
void w_char(va_list ap, int *p);
void w_double(va_list ap, int *p);
void w_str(va_list ap, int *p);
void format_function(char fs, va_list ap, int *p);
void int_to_string(int number, char *str);

#endif
