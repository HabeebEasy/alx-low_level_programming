#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	int p;
	int count = 0;

	for (p = 0 ; s[p] != '\0' ; p++)
		count++;
	for (p = 0 ; p < count / 2 ; p++)
	{
		char j;

		j = s[p];
		s[p] = s[count - 1 - p];
		s[count - 1 - p] = j;
	}
}
