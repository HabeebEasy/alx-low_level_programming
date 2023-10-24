#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: area to fill with bytes
 * @b: function parameter
 * @n: number of bytes to be changed
 * Return: return to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int p;

	for (p = 0 ; p < n ; p++)
		s[p] = b;
	return (s);
}
