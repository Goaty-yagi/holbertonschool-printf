#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void int_to_string(int number, char *str)
{
	unsigned int posValue;
	char temp;
	int length, j, i;
	if (number < 0)
	{
		posValue = -(unsigned int)number;
	}
	else
	{
		posValue = (unsigned int)number;
	}
	i = 0;
	do
	{
		str[i++] = posValue % 10 + '0';
		posValue /= 10;
	} while (posValue != 0);
	if (number < 0)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	length = i;
	for (j = 0; j < length / 2; j++)
	{
		temp = str[j];
		str[j] = str[length - j - 1];
		str[length - j - 1] = temp;
	}
}
/**
 * w_double - calls w_double
 * @i: int
 * Return: void
 */

void w_double(int i, int *p)
{
	char *c;
	c = malloc(10);
	int_to_string(i, c);
	write(1, c, strlen(c));
	free(c);
	*p = *p + strlen(c);
}
