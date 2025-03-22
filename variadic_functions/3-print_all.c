#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the given format
 * @format: All arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' ||
		    format[i] == 'i' ||
		    format[i] == 'f' ||
		    format[i] == 's')
		{
			printf("%s", sep);
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
			}
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
