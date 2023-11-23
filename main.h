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
	int (*f)(va_list ap, int *b);
} fs_t;

int _putchar(char c);
int _printf(const char *format, ...);
int w_char(va_list ap, int *p);
int w_double(va_list ap, int *p);
int w_str(va_list ap, int *p);
int format_function(char fs, va_list ap, int *p);
void int_to_string(int number, char *str);

#endif
