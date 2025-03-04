#include "main.h"

/**
 * _strchr - Locating a specfic character in a string
 * @s: pointer
 * @c: destination letter
 *
 * Return: Pointer to c Or null if not there.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);

	return (0);
}

