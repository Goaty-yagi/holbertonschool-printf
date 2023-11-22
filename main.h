#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct fm
{
	char *op;
	int (*f)(char a, int *b);
} fm_t;

int _putchar(char c);
int _printf(const char *format, ...);
void w_char(int ap, int *p);
void w_double(int i, int *p);
void w_integer(int i, int *p);
void w_percent(char c, int *p);
void w_str(char c, int *p);
int format_function(char op);
void int_to_string(int number, char *str);

#endif
