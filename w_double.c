#include "main.h"
/**
 * w_double - calls w_double
 * @ap: va_list
 * @p: length
 * Return: void
 */

int w_double(va_list ap, int *p)
{
	char *c;
	int i;

	i = va_arg(ap, int);
	if (i == 0)
	{
		_putchar('0');
		*p = *p + 1;
		return (0);
	}
	c = malloc(sizeof(int));

	if (c)
	{
		int_to_string(i, c);
		write(1, c, strlen(c));
		*p = *p + strlen(c);
	}
	free(c);
	return (0);
}
