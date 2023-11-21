#include "main.h"
#include <unistd.h>

/**
 * _putchar - calls _putchar
 * @c: char
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
