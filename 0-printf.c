#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - Function that produces output according to format
 * @format: A character string composed of zero or more directives
 *
 * Description: This function works like the regular printf function.
 * It takes a string which may contain directives such as %s %d and arguments.
 * It processes them and prints a desired output like that of printf.
 * Return: "n_chars" the number of characters being printed.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char *str, *a, *b;
	int size, i, j;
	int *n_chars;

	va_start(ap, format);
	size = 0, i = 0;
	while (format[size] != '\0')
		size++;
	/* Allocate memory to str */
	str = malloc(size + 1);
	for (j = 0; j < size; j++)
	{
		int (*run)(char *, int *, va_list);

		*a = format[j];
		*b = format[j + 1];
		run = spec_pe_call(a, b);
		if (*a == '%')
			run(str, n_chars, ap);
	}
	va_end(ap);
	write(1, str, n_chars);

	return (n_chars);
}
