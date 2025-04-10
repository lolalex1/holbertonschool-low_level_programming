#include "main.h"

/**
 * _strlen_recursion - Length of string
 * @s: pointer to string
 *
 * Description: Lengthofstring
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
