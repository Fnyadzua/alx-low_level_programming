#include <stdio.h>
/**
 * main - main block
 * Description - prints alphabetic in lowercase
 * q and e letters are not included
 * Return: 0
 */
int main(v0id)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a !='e')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');
	return (0);
}
