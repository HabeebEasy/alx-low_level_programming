#include "main.h"

/**
 * jack_bauer - print every minites of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int p, q;

	for (p = 0 ; p <= 23 ; p++)
	{
		for (q = 0 ; q <= 59 ; q++)
		{
			_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
			_putchar(':');
			_putchar(q / 10 + '0');
			_putchar(q % 10 + '0');
			_putchar('\n');
		}
	}
}
