#include "main.h"

/**
 * print_perc - prints '%'
 *
 * Return: 1
 */

int print_perc(void)
{
	char percent = '%';

	write(1, &percent, 1);
	return (1);
}
