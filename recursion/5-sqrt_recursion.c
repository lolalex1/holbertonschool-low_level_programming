#include "main.h"

/**
 * find_sqrt - x
 * @num: number
 * @root: root looking for
 *
 * Description: checking if root === num
 *
 * Return: square root of num
 */
int find_sqrt(int num, int root)
{
	if (root * root > num)
		return (-1);
	if (root * root == num)
		return (root);
	return (find_sqrt(num, root + 1));
}

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
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}
