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
int print_hex(unsigned int n, unsigned int c);
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_u(va_list u);

#endif
