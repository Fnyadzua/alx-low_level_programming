#include "main.h"
/**
 * _memcpy - copies n bytes from memory
 * @dest: destination
 * @src: source
 * @n: the number of bytes
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
