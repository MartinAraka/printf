#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct format
{
	char *in;
	int (*u)();
} check;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list var);
int printf_string(va_list var);
int _strlen(char *str);
int _strlenco(const char *str);
int print_perc(void);
int print_d(va_list inp);
int print_dec(va_list inp);
int print_bin(va_list var);
int print_unsigned(va_list inp);
int print_oct(va_list var);
int print_hex(va_list var);
int print_HEX(va_list var);
int print_e_string(va_list var);
int print_e_HEX(unsigned int var);


#endif
