#include "main.h"

/**
 * printf_string - function that prints a string
 * @fig: number of characters in string to be printed
 *
 * Return: number of characters
 */

int printf_string(va_list fig)
{
	char *str;
	int i;
	int length;

	str = va_arg(fig, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < lenght; i++)
			write(1, str, strlen(str));
		return (length);

	}
	else
	{
		lenghth = strlen(str);
		for (i = 0; i < length; i++)
			write(1, str, strlen[i]);
		return (length);
	}

}
