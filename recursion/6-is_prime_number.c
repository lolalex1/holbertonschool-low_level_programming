#include "main.h"

/**
 * check_prime - checking if num = prime
 * @num: the number to check
 * @div: our "divisor"
 *
 * Description: checking if num is divisable
 *
 * Return: 1 if prime, 0 else
 */
int check_prime(int num, int div)
{
	if (num <= 1)
		return (0);
	if (div * div > num)
		return (1);
	if (num % div == 0)
		return (0);
	return (check_prime(num, div + 1));
}

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
	return (check_prime(n, 2));
}
