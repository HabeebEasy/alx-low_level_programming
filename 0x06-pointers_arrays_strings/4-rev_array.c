#include "main.h"

/**
 * reverse_array - Description
 * @a: inputted string
 * @n: inputted string
 *
 * Return: returns an integer
 */

void reverse_array(int *a, int n)
{
	int p;
	int j;

	for (p = 0 ; p < n / 2 ; p++)
	{
		j = a[p];
		a[p] = a[n - 1 - p];
		a[n - 1 - p] = j;
	}
}
