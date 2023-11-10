#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: number of arguments
 * Return: sum of arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int p;
	int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (p = 0; p < n; p++)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
