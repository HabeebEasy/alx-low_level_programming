#include <stdio.h>

/**
 * main - print asll argument
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int p;

	for (p = 0 ; p < argc ; p++)
		printf("%s\n", argv[p]);
	return (0);
}
