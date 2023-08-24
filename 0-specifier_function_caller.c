#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * spec_pe_call - Function calls a spec_function
 * @a: % input
 * @b: Other character input such as 'c', 's', etc
 *
 * Description: Uses an array to check which function to call
 * based on specifier 'a''b'.
 * Return: A pointer to the required function.
 */
void (*spec_pe_call(char *a, char *b))(char *, int *, va_list)
{
	func_t option[] = {
		{"%", "c", spec_c},
		{"%", "s", spec_s},
		{"%", "%", spec_pe},
		{NULL, NULL, NULL}
	};

	int i = 0;

	while ((option[i].a != NULL && *(option[i].a) != *a) ||
			(*(option[i].b) != *b && option[i].b != NULL))
		i++;

	if (option[i].b == NULL)
		return (NULL);

	return (option[i].f);
}
