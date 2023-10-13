#include "main.h"

/**
 * print_diagonal - prints diagonal using the '\' character
 * @n: number of times
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int p, q;

		for (p = 0 ; p < n ; p++)
		{
			for (q = 0 ; q <= p ; q++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
