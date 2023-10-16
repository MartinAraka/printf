#include "main.h"

/**
 * printf_string - function that prints a string
 * @var: number of characters in string to be printed
 *
 * Return: number of characters
 */

int printf_string(va_list var)
{
	char *str;
	int i;
	int length;

	str = va_arg(var, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);

	}
	else
	{
		length = strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}

}
