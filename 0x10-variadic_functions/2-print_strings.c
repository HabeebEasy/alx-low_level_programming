#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: separator between dtrings
 * @n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list bee;

	va_start(bee, n);

	for (p = 0; p < n; p++)
	{
		char *x = va_arg(bee, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator != NULL && p < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(bee);
}
