#include "main.h"
/**
 * int_to_string - calls int_to_string
 * @number: int
 * @str: char pointer
 * Return: void
 */
void int_to_string(int number, char *str)
{
	unsigned int pos_val;
	char temp;
	int length, j, i;

	if (number < 0)
	{
		pos_val = -(unsigned int)number;
	}
	else
	{
		pos_val = (unsigned int)number;
	}
	i = j = 0;
	while (pos_val != 0)
	{
		str[i] = pos_val % 10 + '0';
		pos_val /= 10;
		i = i + 1;
	}
	if (number < 0)
	{
		str[i] = '-';
		i = i + 1;
	}
	str[i] = '\0';
	length = i;
	while (j < length / 2)
	{
		temp = str[j];
		str[j] = str[length - j - 1];
		str[length - j - 1] = temp;
		j = j + 1;
	}
}
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
