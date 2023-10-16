#include "main.h"

/**
 * printf_char - prints a character
 * @var: arguement list
 *
 * Return: Number of characters to be printed
 */

int printf_char(va_list var)
{
	char str;

	str = va_arg(var, int);
	write(1, &str, 1);

	return (1);

}
