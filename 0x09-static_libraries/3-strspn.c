#include "main.h"

/**
 * _strspn - to get the lenght of a prefix substring
 * @s: search parameter
 * @accept: string to search
 * Return: number of characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int p, q;

	for (p = 0 ; s[p] != '\0' ; p++)
	{
		for (q = 0 ; s[p] != accept[q] ; q++)
		{
			if (accept[q] == '\0')
				return (p);
		}
	}
	return (0);
}
