#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination sting
 * @src: soyrc string
 * @n: function parameter
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int p;

	for (p = 0 ; p < n && *src != '\0' ; p++)
	{
		dest[len + p] = *src;
		src++;
	}
	dest[len + p] = '\0';
	return (dest);
}
