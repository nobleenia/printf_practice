#include "main.h"

/**
 * 
 * 
 * 
 */
int _print_percent (va_list args, char buffer[], int flags, int width, int prec, int size)
{
    UNUSED(buffer);
    UNUSED(flags);
    UNUSED(width);
    UNUSED(prec);
    UNUSED(size);

    return(write(1, "%%", 1));
}  