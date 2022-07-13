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
int _putchar(char c);
int print_int(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(va_list arg);
int print_percent(void);
void print_binary(unsigned int n, unsigned int* printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR (va_list arg);

/**
 *  * struct identifierStruct - structure definition of a printTypeStruct
 *   * @indentifier: type
 *    * @printer: function to print
 *     */
typedef struct identifierStruct
{
	char *indentifier;
	int (*printer)(va_list);
} identifierStruct;

#endif
