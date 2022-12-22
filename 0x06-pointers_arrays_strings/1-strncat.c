#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @n: size of character to contatenate
 * @dest: s1
 * @src: s2
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
		i++;

	while (*(src + j) != *(src + n))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	
	*(dest + i) = '\0';

	return (dest);
}
