#include <stdio.h>

/**
 * main - main performance
 *
 * Return: 0 for approve
 */

int main(void)
{
	char aCharacter;
	int integer;
	long int aLI;
	long long int aLLI;
	float aFloat;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(aCharacter));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(aLI));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(aLLI));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(aFloat));

	return (0);
}
