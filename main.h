#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 */
typedef struct vtype
{
	char tp;
	void (*f)();
}vtype_t;
int _printf(const char *format, ...);
void _write_buffer(char *buffer, int *index);
void reset_buffer(char buffer[]);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_perc(va_list valist, char *buffer, int *index);
char *_memcpy(char *dest, char *src, unsigned int n);
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
#endif
