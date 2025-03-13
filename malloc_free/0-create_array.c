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
	if (size == 0) {
		return (NULL);
	}

	char *arr;

	char *arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL) {
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++) {
		arr[i] = c;
	}

	return (arr);
}

