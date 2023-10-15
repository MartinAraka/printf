#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list fig);
int printf_string(va_list, fig);
int _strlen(char *str);
int _strlenco(const char *str);
int print_perc(void);

#endif
