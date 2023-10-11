#include "main.h"

/**
 * print_alphabet_x10 - print function in lowercase_×10
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int p;
	char q;

	for (p = 1 ; p <= 10 ; p++)
	{
		for (q = 'a' ; q <= 'z' ; q++)
			_putchar(q);
		_putchar('\n');
	}
}
