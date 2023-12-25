#include "main.h"

/**
 * print_bin - function that converts to binary
 * @var: arguement list
 *
 * Return: integer
 */

int printf_bin(va_list var)
{
	int flag = 0;
	int cont = 0;
	int j, k = 1, l;
	unsigned int num = va_arg(var, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((k << (32 - j)) & num);
		if (p >> (31 - j))
			flag = 1;
		if (flag)
		{
			l = p >> (31 - j);
			_putchar(l + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
