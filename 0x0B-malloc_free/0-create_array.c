#include "main.h"

/**
 * create_array - create an array of char and initialize it
 * @size: size of an array
 * @c: character to store an array
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		arr[p] = c;
	return (arr);
}
