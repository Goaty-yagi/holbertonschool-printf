#include "main.h"
/**
 * format_function - calls format_function
 * @fs: format specifier
 * @ap: va_list
 * @p: int pointer for length
 * Return: void
 */
void format_function(char fs, va_list ap, int *p)
{
	fs_t fspecs[] = {
		{'c', w_char},
		{'s', w_str},
		{'d', w_double},
		{'i', w_double},
	};
	int i, len, executed;

	i = 0;
	len = sizeof(fspecs) / sizeof(fspecs[0]);
	while (i < len)
	{
		if (fs == '%')
		{
			_putchar('%');
			*p = *p + 1;
			executed = executed + 1;
		}
		else if (fspecs[i].fs == fs)
		{
			fspecs[i].f(ap, p);
			executed = executed + 1;
		}
		i = i + 1;
	}
	if (!executed)
	{
		_putchar('%');
		_putchar(fs);
		*p = *p + 2;
	}
}
