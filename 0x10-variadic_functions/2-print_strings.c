#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string between the strings
 * @n: num of strings passed
 * @...: the rest of the variables to be printed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *string;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char*);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i != (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
