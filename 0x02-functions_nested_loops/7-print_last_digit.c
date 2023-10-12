#include "main.h"

/**
 * print_last_digit - print last digit
 * @p: funtion parameter
 * Return: k
 */

int print_last_digit(int p)
{
	int k;

	k = p % 10;
	if (p < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
