#include "main.h"

/**
 * 
 * 
 * 
 */
int _print_hex_low(va_list args, char buffer[], int flags, int width, int prec, int size)
{
    return (_print_hexa_up_low(args, "0123456789abcdef", buffer, flags, 'x', width, prec, size))
}