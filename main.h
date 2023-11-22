#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
void w_char(va_list ap, int *p);
void w_double(int i, int *p);
void w_integer(int i, int *p);
void w_str(va_list ap, int *p);
void format_function(const char *format, int counter, va_list ap, int *p);
void int_to_string(int number, char *str);

#endif
