#include "main.h"
#include <stdlib.h>

/**
 * create-array - Array of chars initalized specfic char
 *
 * @size: size of memory to print
 * @c: Inizilaising character
 *
 * Return: Pointer to array, null otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

