#include "main.h"

/**
 * print_oct - function that converts to octal
 * @var: variable parameter
 *
 * Return: j
 */

int print_oct(va_list var)
{
	int i, j = 0;
	int *array;
	unsigned int num = va_arg(var, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		j++;
	}
	j++;
	array = malloc(sizeof(int) * j);

	for (i = 0; i < j; i++)
	{
		array[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = j - 1; i >= 0; i--)
		_putchar(array[i] + '0');
	free(array);
	return (j);
}
