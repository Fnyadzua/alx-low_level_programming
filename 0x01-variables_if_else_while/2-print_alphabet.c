#include <stdio.h>
/**
 * main - main block
 * Description - use 'putchar' to print the lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
{
	putchar(a);
	a++;
}
	putchar('\n');
	return (0);
}
