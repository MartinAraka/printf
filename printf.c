#include "main.h"
#include <stdio.h>

/**
 *_printf - print the character
 *@format: identifiy type of input
 *
 *
 *Return: integer
 *
 */
int _printf(const char *format, ...)
{
	check c[] = {
		{"%c", printf_char}, {"%%", print_perc},
		{"%d", print_dec}, {"%s", printf_string},
		{"%i", print_d}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_e_string}
	};

	va_list inp;
	int x = 0, dis = 0;
	int y;

	va_start(inp, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[x] != '\0')
	{
		y = 9;
		while (y >= 0)
		{
			if (c[y].in[0] == format[x] && c[y].in[1] == format[x + 1])
			{
				dis = dis + c[y].u(inp);
				x = x + 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		x++;
		dis++;
	}

	va_end(inp);
	return (dis);
}
