#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
void _printnum(int n);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int count_place(int n);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list f);
void print_i(va_list f);
void print_f(va_list f);
void print_s(va_list f);


typedef struct identifier {
	char *format;
	void (*print)(va_list f);
} identifier;

#endif /* VARIADIC_FUNCTIONS_H */
