#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_s - prints a string
 * @s: string to print
 * Return: number of chars printed
 */
int print_s(va_list s)
{
	int count;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}

/**
 * print_c - prints a char
 * @c: char to print
 * Return: always 1
 */
int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}
