#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - print all the numbers between the provided number and 98
 * @n: integer to start at
 * Return:void
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
