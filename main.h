#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct what_format - Structure to match specifier with correspond func
 *
 * @formatz: String to be printed
 * @f: Function pointer for which specifier to be used
 *
 */

int _printf(const char *format, ...);
int _putchar(char c);
void w_char(char c, int *p);
void w_double(int i, int *p);
void w_integer(int i, int *p);
void w_percent(char c, int *p);
void w_str(char c, int *p);
int format_function(void);

#endif
