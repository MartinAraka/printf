#include "main.h"

/**
 * _strlen - calculates length of string
 * @str: string pointer
 *
 * Return:- j
 */

int _strlen(char *str)
{
	int j;

	for (j = 0; str[j] != '0\'; j++)
		;
	return (j);

}

/**
*_strlenco - strlen for constant pointer to str
*@str: char pointer
*
*Return:- j
*/
int _strlenco(const char *str)
{
	int j;

	for (j = 0; str[j] != '0\')
		;
	return (j);
}
