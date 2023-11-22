#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * format_function - calls format_function
 * @c: option
 * Return: int
 */

int format_function(char op)
{
    fm_t fspecs[] = {
        {'c', w_char},
        {'s', w_str},
        {'%', w_percent},
        {'d', w_double},
        {'i', w_integer},
        {NULL, NULL}};

    int i;

    i = 0;

    while (fspecs[i].f != NULL)
    {
        if (fspecs[i].op == op)
        {
            return (fspecs[i].f);
        }
        i = i + 1;
    }
    return (0);
}
