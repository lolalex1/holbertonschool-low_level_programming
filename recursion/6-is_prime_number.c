#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to check
 *
 * Description: checking if n is prime
 *
 * Return: 1 if prime, 0 else
 */
int is_prime_number(int n)
{
	static int divisor = 2;

	if (n <= 1)
		return (0);
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	divisor++;
	return (is_prime_number(n));
}
