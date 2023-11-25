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
