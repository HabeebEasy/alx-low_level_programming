#include "main.h"

/**
 * print_numbers - print 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int p;

	for (p = 0 ; p <= 9 ; p++)
		_putchar(p + '0');
	_putchar('\n');
}
