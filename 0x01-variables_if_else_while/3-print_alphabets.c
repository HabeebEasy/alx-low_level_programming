#include <stdio.h>

/**
 * main - the main function
 *
 * Return: always 0
 */

int main(void) 
{
	char p;
	char P;

	for (p = 'a' ; p <= 'z' ; p++)
		putchar(p);
	for (P = 'A' ; P <= 'Z' ; P++)
		putchar(P);
	putchar('\n');
	return (0);
}
