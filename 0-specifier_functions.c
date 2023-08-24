#include <stdion.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * spec_c - Checks for matching chars & copies arguments to a pointer
 * @str: Receives the content of an argument
 * @index: Integer refers to the current position in new_str
 * @argx: Refers to an original va_list
 *
 * Description: Copies the char(s) of an arg into str
 * Return: nothing.
 */
void spec_c(char *str, int *index, va_list argx)
{
	str[*index] = (char)va_arg(argx, int);
	(*index)++;
}
/**
 * spec_s - Checks for matching chars & copies arguments to a pointer
 * @str: Receives the content of an argument
 * @index: Integer refers to the current position in new_str
 * @argx: Refers to an original va_list
 *
 * Description: Copies the char(s) of an arg into str
 * Return: nothing.
 */
void spec_s(char *str, int *index, va_list argx)
{
	char *s;
	int i = 0;

	s = va_arg(argx, char *);
	if (s == NULL)
		return;
	while (s[i] != '\0' && str[*index] != '\0')
	{
		str[(*index)++] = s[i++];
	}
}
/**
 * spec_pe - Checks for '%' following another '%'
 * @str: An output is appended to str
 * @index: Refers to the current position in new_str
 * @argx: Refers to an original va_list
 *
 * Description: Copies the char(s) of an arg into str
 * Return: nothing.
 */
void spec_pe(char *str, int *index, va_list argx)
{
	str[*index] = '%';
	(*index)++;
}
