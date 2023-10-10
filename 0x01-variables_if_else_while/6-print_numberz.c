#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int p;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	putchar('\n');
	return (0);
}
