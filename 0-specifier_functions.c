#include <stdion.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * spec_c - Checks for matching chars & copies arguments to a pointer
 * @str: Receives the content of an argument
 * @index: Integer refers to the current position in new_str
 * @argx: Refers to an updated copy of a va_list
 *
 * Description: Copies the char(s) of an arg into str
 * Return: new_str.
 */
int spec_c(char *str, int index, va_list argx)
{
	va_copy(va_list argz, argx);
	str[index] = (char)va_arg(argz, int);
	va_end(argz);
	index++;

	return (index);
}
/**
 * spec_s - Checks for matching chars & copies arguments to a pointer
 * @str: Receives the content of an argument
 * @index: Integer refers to the current position in new_str
 * @argx: Refers to an updated copy of a va_list
 *
 * Description: Copies the char(s) of an arg into str
 * Return: new_str.
 */
int spec_s(char *str, int index, va_list argx)
{
	char *s;
	int i = 0;
	va_list argz;

	va_copy(argz, argx);
	s = va_arg(argz, char *);
	if (s == NULL)
		return (0);
	while (s[i] != '\0' && str[index] != '\0')
	{
		str[index++] = s[i++];
	}
	va_end(argz);

	return (index);
}
