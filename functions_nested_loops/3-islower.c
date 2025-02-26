#include "main.h"

/**
 * _islower - Checking if a letter is lowercase 
 *
 * Description: Return 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
