#include "main.h"

/**
 * w_double - calls w_double
 * @i: int
 * Return: void
 */
 
void w_double(int i, int *p)
{
	if (i < 0)
	{
		_putchar('-');
		*p = *p + 1;
		i = -i;
	}
	if (i / 10)
	{
		w_double(i / 10, p);
	}
	_putchar(i % 10 + 48);
	*p = *p + 1;
}
