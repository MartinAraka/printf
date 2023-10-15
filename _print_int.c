#include "main.h"

/**
 *print_d - print integer value
 *@inp: integer to be displayed
 *
 *Return:character of number
 */
int print_d(va_list inp)
{
	int d = va_arg(inp, int);
	int inp_num, last_num = d % 10, num_d, p = 1;
	int x = 1;

	d = d / 10;
	inp_num = d;

	if (last_num < 0)
	{
		_putchar('-');
		inp_num = -inp_num;
		d = -d;
		last_num = -last_num;
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
	_putchar(last_num + '0');

	return (x);
}
#include "main.h"

/**
 *print_dec - print decimal  value
 *@inp: decimal to be displayed
 *
 *Return: character of decimal
 */
int print_dec(va_list inp)
{
	int d = va_arg(inp, int);
	int inp_num, last_num = d % 10, num_d, p = 1;
	int x = 1;

	d = d / 10;
	inp_num = d;

	if (last_num < 0)
	{
		_putchar('-');
		inp_num = -inp_num;
		d = -d;
		last_num = -last_num;
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
			exp = exp / 10;
			x++;
		}
	}
	_putchar(last_num + '0');

	return (x);
}
