#include "main.h"

/**
 * _isalpha - Checking if value is an alphabetic character
 * @c: The character to check.
 *
 * Description: Checking if any character given is an alphabetic character.
 *
 * Return: 1 if c is alphatetic character, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
