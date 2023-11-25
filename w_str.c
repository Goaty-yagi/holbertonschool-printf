#include "main.h"
/**
 * w_str - calls w_str
 * @ap: va_list
 * @p: length
 * Return: void
 */
int w_str(va_list ap, int *p)
{
	char *s;

	s = va_arg(ap, char *);
	if (s)
	{
		write(1, s, strlen(s));
		*p = *p + strlen(s);
	}
	else
	{
		write(1, "(null)", 6);
		*p = *p + 6;
	}
	return (0);
}
