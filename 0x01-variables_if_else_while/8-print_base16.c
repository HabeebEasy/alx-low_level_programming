#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */
int main(void)
{
	int p;
	char q;

	for (p = 0 ; p < 10 ; p++)
		putchar(p + '0');
	for (q = 'a' ; q <= 'f' ; q++)
		putchar(q);
	putchar('\n');
	return (0);
}
