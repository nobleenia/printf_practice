#include "main.h"

/**
 * 
 * 
 * 
 */
int _print_rot13(va_list args, char buffer[], int flags, int width, int prec, int size)
{
	char n;
	char *str;
	unsigned int i, j;
	int ret_val = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(args, char *);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(prec);
	UNUSED(size);

	if (str == NULL)
		str = "(AHYY)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				n = out[j];
				write(1, &x, 1);
				ret_val++;
				break;
			}
		}
		if (!in[j])
		{
			n = str[i];
			write(1, &x, 1);
			ret_val++;
		}
	}
	return (ret_val);
}