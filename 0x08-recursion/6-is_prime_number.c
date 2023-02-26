#include "main.h"

int is_prime(int n, int div);

/**
  * is_prime - check if n is divisible
  * @n: number to check
  * @div: divisor
  * Return: 0 if divisible, 1 if not
  */
int is_prime(int n, int div)
{
	if (n % div == 0)
		return (0);

	if (div == n / 2)
		return (1);

	return (is_prime(n, div + 1));

}





/**
  * is_prime_number - function to check if n is prime
  * @n: n
  * Return: 1 if prime and 0 if otherwise
  */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_prime(n, div));
}

