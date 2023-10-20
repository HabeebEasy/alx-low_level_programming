#include "main.h"
#include <string.h>

/**
 * *string_toupper - Description
 * @p: string
 * Return: 0
 */

char *string_toupper(char *p)
{
	int q;

	for (q = 0; p[q] != 0; q++)
	{
		if (p[q] > 96 && p[q] < 123)
			p[q] = p[q] - 32;
	}
	return (p);
}
