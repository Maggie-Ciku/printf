#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);

#endif
