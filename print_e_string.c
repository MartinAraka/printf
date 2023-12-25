#include "main.h"

/**
 * print_e_string - function that prints exclusive string
 * @var: value
 *
 * Return: number of characters printed
 */

int print_e_string(va_list var)
{
	char *s;
	int j, len = 0;
	int value;

	s = va_arg(var, char *);
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 32 || s[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[j];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_e_HEX(value);
		}
		else
		{
			_putchar(s[j]);
			len++;
		}
	}
	return (len);
}
