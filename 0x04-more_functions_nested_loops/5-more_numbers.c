#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int p;
	int q;

	for (p = 0 ; p < 10 ; p++)
	{
		for (q = 0 ; q <= 14 ; q++)
		{
			if (q > 9)
				_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
		}
		_putchar('\n');
	}
}
