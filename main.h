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

#endif
