#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>

/* The printf function */
int _printf(const char *format, ...);
/* Specifier %c function */
void spec_c(char *str, int *index, va_list argx);
/* Specifier %s function */
void spec_s(char *str, int *index, va_list argx);
/* Specifier %% function */
void spec_pe(char *str, int *index, va_list argx);
/* Specifier %d function */
void spec_d(char *str, int *index, va_list argx);
/* A function Pointer for % family*/
void (*spec_pe_call(const char *a, const char *b))(char *, int *, va_list);

/**
 * struct func - Structure for specifier & it's call function
 *
 * @a: First character to check for specifier
 * @b: Second character to check for specifier
 * @f: Function associated with 'st' and 'nd'
 */
typedef struct func
{
	const char *a;
	const char *b;
	void (*f)(char *s, int *a, va_list ap);
} func_t;

#endif
