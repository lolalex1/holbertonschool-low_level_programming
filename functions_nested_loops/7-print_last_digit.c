#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number.
 *
 * Description: Checking and printing last digit of a number.
 *
 * Return: Value of last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');
	return (last_digit);
}