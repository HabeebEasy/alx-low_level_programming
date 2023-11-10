#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int p;
	va_list arg;

	va_start(arg, n);
	for (p = 0; p < n; p++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arg, int));
			if (p != n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(arg, int));
	}
	putchar('\n');
	va_end(arg);
}
