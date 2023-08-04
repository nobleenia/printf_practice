#include "main.h"

/**
 * 
 * 
 * 
 */
int _print_hexa_up_low(va_list args, char mask[], char buffer[], int flags, char flag_ch, int width, int prec, int size)
    {
        int n = BUFF_SIZE - 2;
	unsigned long int num = va_arg(args, unsigned long int);
	unsigned long int init_num = num;

UNUSED(width);

	num = convert_size_unsigned(num, size);

	if (num == 0)
		buffer[n--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';

	while (num > 0)
	{
		buffer[n--] = mask[num % 16];
		num /= 16;
	}

	if (flags & F_HASH && init_num != 0)
	{
		buffer[n--] = flag_ch;
		buffer[n--] = '0';
	}

	n++;

	return (write_unsigned(0, n, buffer, flags, width, prec, size));

    }
