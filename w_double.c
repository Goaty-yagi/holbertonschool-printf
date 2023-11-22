/**
 * int_to_char - converts an integer to a char
 *
 * @num: integer to be converted
 *
 * Return: output char, else 1
 */
int int_to_char(long num)
{
	int i;

	i = 0;

	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		i = i + 1;
	}
	if (num / 10 != 0)
	{
		i = i + int_to_char(num / 10);
	}
	_putchar(num % 10 + '0');
	i = i + 1;
	return (i);
}

/**
 * w_double - print an number
 *
 * @args: argument to be printed
 *
 * Return: number to be printed
 */
int w_double(va_list args)
{
	int num;

	num = va_arg(args, int);
	return (int_to_char(num));
}
