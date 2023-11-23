#include "main.h"
/**
 * w_binary - calls w_binary
 * @ap: va_list
 * @p: length
 * Return: int
 */

int w_binary(va_list ap, int *p)
{
	int binary_num[32], n, i;
	i = 0;
	n = va_arg(ap, int);
	while (n > 0)
	{
		/* storing remainder in binary array */
		binary_num[i] = n % 2;
		n = n / 2;
		i = i + 1;
	}

	/* printing binary array in reverse order */
	while (i - 1 >= 0)
	{
		_putchar(binary_num[i - 1] + 48);
		*p = *p + 1;
		i = i - 1;
	}
	return (0);
}
