#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

/* The printf function */
int _printf(const char *format, ...);
/* Specifier %c function */
int spec_c(char *str, int *index, va_list argx);
/* Specifier %s function */
int spec_s(char *str, int *index, va_list argx);
/* Specifier %% function */
int spec_pe(char *str, int *index, va_list argx);
/* Specifier %d function */
int spec_d(char *str, int *index, va_list argx);
/* A function Pointer for % family*/
int (*spec_pe_call(char *a, char *b))(char *, int *, va_list);

/**
 * struct func - Structure for specifier & it's call function
 *
 * @a: First character to check for specifier
 * @b: Second character to check for specifier
 * @f: Function associated with 'st' and 'nd'
 */
typedef struct func
{
	char *a;
	char *b;
	int (*f)(char *s, int *a, va_list ap);
} func_t;

#endif
