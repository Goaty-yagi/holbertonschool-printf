#include "main.h"
/**
 * format_function - calls format_function
 * @fs: format specifier
 * @ap: va_list
 * @p: int pointer for length
 * Return: void
 */
int format_function(char fs, va_list ap, int *p)
{
	fs_t fspecs[] = {
		{'c', w_char},
		{'s', w_str},
		{'d', w_double},
		{'i', w_double},
		{'b', w_binary}
	};
	int i, len;

	i = 0;
	len = sizeof(fspecs) / sizeof(fspecs[0]);
	while (i < len)
	{
		if (fs == '%')
		{
			_putchar('%');
			*p = *p + 1;
			return (0);
		}
		else if (fspecs[i].fs == fs)
		{
			fspecs[i].f(ap, p);
			return (0);
		}
		i = i + 1;
	}
	_putchar('%');
	_putchar(fs);
	*p = *p + 2;
	return (0);
}
