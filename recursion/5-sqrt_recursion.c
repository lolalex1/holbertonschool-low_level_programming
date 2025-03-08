#include "main.h"

/**
 * _sqrt_recursion - natural squareroot of num
 * @n: our number arg
 *
 * Description: Recursion to find squareroot
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	static int num = 0;

	if (num * num > n)
		return (-1);
	if (num * num == n)
		return (num);
	num++;
	return (_sqrt_recursion(n));
}
