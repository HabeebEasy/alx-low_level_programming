#include "main.h"
#include <stdio.h>

/**
 * times_table - 9times_table
 *
 * Return: void
 */

void times_table(void)
{
	int p, q, s;

	for (p = 0 ; p <= 9 ; p++)
	{
		for (q = 0 ; q <= 9; q++)
		{
			s = p * q;
			if (q == 0)
				printf("%d, ", s);
			else
			{
				printf("%2d", s);
				if (q != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
