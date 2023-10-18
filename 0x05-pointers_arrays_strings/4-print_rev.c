#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int p;
	int count = 0;

	for (p = 0 ; s[p] != '\0' ; p++)
		count++;
	for (p = count - 1 ; p >= 0 ; p--)
		_putchar(s[p]);
	_putchar('\n');
}
