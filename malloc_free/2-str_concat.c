#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated space in memory
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	if (s1)
		while (s1[len1])
			len1++;
	if (s2)
		while (s2[len2])
			len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];
	concat[i + j] = '\0';

	return (concat);
}
