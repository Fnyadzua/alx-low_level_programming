#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

void print_int(va_list arg);
void print_char(va_list arg);
void print_float(va_list arg);
void printt_string(va_list arg);

/**
 * struct format - A struct type for defining formart
 * @symbol: for format type
 * @f: function to print
 */

struct format
{
	char symbol;
	void (*f)(va_list arg);
};

typedef struct format format_t;


#endif

