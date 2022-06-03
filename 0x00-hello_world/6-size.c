#include <stdio.h>

/**
 * main - size of the various types
 *
 * Return: Always 0 (success)
 */

int main (void)
{
	printf("Size of a char: %d" sizeof(char));
	printf("Size of a int: %d" sizeof(int));
	printf("Size of a long int: %d bytes" sizeof(long int));
	printf("Size of a long long int: %d bytes" sizeof(long long int));
	printf("Size of a float: %d  bytes" sizeof(float));

	return 0;
}


