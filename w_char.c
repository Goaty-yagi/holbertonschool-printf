#include "main.h"
#include <unistd.h>

void w_char(va_list ap, int *p)
{
    char c;
    c = va_arg(ap, int);
    _putchar(c);
    *p = *p + 1;
}
