#include "main.h"

/**
 * _strncpy - copy string
 * @dest: destination string
 * @src: source string
 * @n: function parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0 ; p < n && src[p] != '\0' ; p++)
		dest[p] = src[p];
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
