#include "main.h"

/**
 * print_hex - function that converts to hex
 * @var: variable parameter
 *
 * Return: j
 */

int print_hex(va_list var)
{
	int i, j = 0;
	int *array;
	unsigned int num = va_arg(var, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		j++;
	}
	j++;
	array = malloc(sizeof(int) * j);

	for (i = 0; i < j; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = j - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (j);
}
