#include <stdio.h>

/**
 * main - function to sum multiple
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int p;

	for (p = 0 ; p < 1024 ; p++)
	{
		if (p % 3 == 0 || p % 5 == 0)
			sum = sum + p;
	}
	printf("%d\n", sum);
	return (0);
}
