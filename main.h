#ifndef _MAIN_H
#define _MAIN_H

/* The printf function */
int _printf(const char *format, ...);
/* Specifier %c function */
int spec_c(char *str, int index, va_list argx);
/* Specifier %s function */
int spec_s(char *str, int index, va_list argx);
/* Specifier %% function */
int spec_pe(char *str, int index, va_list argx);
/* Specifier %d function */
int spec_d(char *str, int index, va_list argx);

#endif
