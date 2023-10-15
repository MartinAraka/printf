#include "main.h"

/**
 * printf_char - prints a character
 * @fig: va_list containing character to print
 *
 * Return: Number of characters to be printed
 */

int printf_char(va_list fig)
{
	char str;

	str = va_arg(fig, int);
	write(1, &str, 1);

	return (1);

}
