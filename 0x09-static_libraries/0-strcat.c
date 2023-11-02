#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int p;

	for (p = 0 ; dest[p] != '\0' ; p++)
		destlen++;
	for (p = 0 ; src[p] != '\0' ; p++)
		srclen++;
	for (p = 0 ; p <= srclen ; p++)
		dest[destlen + p] = src[p];
	return (dest);
}
