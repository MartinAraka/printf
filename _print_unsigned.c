#include "main.h"

/**
 * print_unsigned - function that prints integer
 * @inp: arguement to be printed
 *
 * Return: number of characters printed
 */

int print_unsigned(va_list inp)
{
	unsigned int d  = va_arg(inp, unsigned int);
	int inp_num, last = d % 10, num_d, p = 1;
	int x = 1;

	d = d / 10;
	inp_num = d;

	if (last < 0)
	{
		_putchar('-');
		inp_num = -inp_num;
		last = -last;
		x++;
	}
	if (inp_num > 0)
	{
		while (inp_num / 10 != 0)
		{
			p = p * 10;
			inp_num = inp_num / 10;
		}
		inp_num = d;
		while (p > 0)
		{
			num_d = inp_num / p;
			_putchar(num_d + '0');
			inp_num = inp_num - (num_d * p);
			p = p / 10;
			x++;
		}
	}
	_putchar(last + '0');

	return (x);
}
