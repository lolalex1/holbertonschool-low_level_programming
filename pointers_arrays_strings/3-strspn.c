#include "main.h"

/**
 * _strspn - Length of prefix substring
 * @s: string
 * @accept: matched characters
 *
 * Return: number of matched bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, sum;

	while (*s)
	{
		sum = 0;
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				sum = 1;
				break;
			}
		}
		if (sum == 0)
		{
			break;
		}

		s++;
		count++;
	}

	return (count);
}

