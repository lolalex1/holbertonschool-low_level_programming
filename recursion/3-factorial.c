#include "main.h"

/**
 * factorial - Factorial of given number
 * @n: given number
 *
 * Description: Getting the factorial of number
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
