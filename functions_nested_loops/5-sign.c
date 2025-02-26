#include "main.h"

/**
 * print_sign - Printing signs of numbers.
 *
 * Description: Printing + if n is greater than 0, printing 0 if n is 0.
 *
 * Return: 1 if n is greater than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
