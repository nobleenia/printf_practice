#include "main.h"

/**
 * 
 * 
 * 
 */
int _print_unsigned(va_list args, char buffer[], int flags, int width, int prec, int size)
{
int n = BUFF_SIZE - 2;
unsigned long int num = va_arg(args, unsigned long int);
num = convert_size_unsigned(num, size);

if (num == 0)
{
    buffer[n--] = '0';
}
buffer[BUFF_SIZE - 1] = '\0';
while (num > 0)
{
    buffer[n--] = (num % 10);
    num /= 10;
}
n++;

return (write_unsigned(0, n, buffer, flags, width, prec, size));
}
