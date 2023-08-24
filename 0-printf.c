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
	int n_chars, *np;

	va_start(ap, format);
	size = 0, i = 0, n_chars = 0, np = &n_chars;
	while (format[size] != '\0')
		size++;
	/* Allocate memory to str */
	str = malloc(size + 1);
	for (j = 0; j < size; j++)
	{
		int (*run)(char *, int *, va_list);

		a = &format[j];
		b = &format[j + 1];
		run = spec_pe_call(a, b);
		if (*a == '%' || *a == '\\')
			run(str, np, ap);
	}
	va_end(ap);
	write(1, str, n_chars);
	free(str);

	return (n_chars);
}
