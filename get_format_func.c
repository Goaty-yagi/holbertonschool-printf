#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_format_func - Selects the specific format
 *
 * @type: Type of format specifier
 *
 * Return: Format specifier or NULL
 */
int (*get_format_func(char type))(va_list args)
{
	what_format fspecs[] = {
		{"c", w_char},
		{"s", w_str},
		{"%", w_percent},
		{"d", w_double},
		{"i", w_integer},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (fspec[i].formatz != NULL)
	{
		if (fspec[i].formatz[0] == type)
		{
			return (fspec[i].f);
		}
		i = i + 1;
	}
	return (NULL);
}
