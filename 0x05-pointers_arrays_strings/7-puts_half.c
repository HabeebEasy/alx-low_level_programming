#include "main.h"

/**
 * puts_half - prints half of string
 * @str: parameter to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int m, n, count = 0;

	for (m = 0 ; str[m] != '\0' ; m++)
		count++;
	n = (count - 1) / 2;
	for (m = n + 1 ; str[m] != '\0' ; m++)
		_putchar(str[m]);
	_putchar('\n');
}
