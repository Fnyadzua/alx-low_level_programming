#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiply two numbers
  * @argc: argment count
  * @argv: argument vector
  * Return: 0
  */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%i\n", (n1 * n2));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
