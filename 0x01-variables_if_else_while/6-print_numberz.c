#include <stdio.h>
/**
 * main -main block
 * using putchar followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

