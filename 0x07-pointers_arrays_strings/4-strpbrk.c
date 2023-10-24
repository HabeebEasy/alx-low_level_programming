#include "main.h"

/**
 * _strpbrk - searches for bytes
 * @s: string parameter
 * @accept: string to seach in s
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
				return (s);
			p++;
		}
		s++;
	}

	return (NULL);
}
