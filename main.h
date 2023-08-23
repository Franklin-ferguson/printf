#ifndef _MAIN_H
#define _MAIN_H

/* The printf function */
int _printf(const char *format, ...);
/* Specifier %c function */
char *spec_c(char *str, int index, va_list argx);
/* Specifier %s function */
char *spec_s(char *str, int index, va_list argx);
/* Specifier %% function */
char *spec_pe(char *str, int index, va_list argx);
/* Specifier %d function */
char *spec_d(char *str, int index, va_list argx);

#endif
