#include "main.h"
#include <unistd.h>
/**
 * w_char - calls w_char
 * @ap: va_list
 * @p: length
 * Return: void
 */
void w_char(va_list ap, int *p)
{
	char c;

	c = va_arg(ap, int);
	_putchar(c);
	*p = *p + 1;
}
