#include "main.h"

/**
 * _islower - Checking if a letter is lowercase.
 * @c: The character to check.
 *
 * Description: Return 1 if lowercase, 0 otherwise.
 *
 * Return: Will return 1 if c is lowercase, otherwise will return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
