#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: String to print between strings
 * @n: Number of strings passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}
