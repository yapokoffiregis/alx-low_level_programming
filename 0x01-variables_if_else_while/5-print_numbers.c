#include <stdio.h>

/**
 * main - base 10 all digits
 *
 * Return: 0
 */

int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
		printf("%d", digits);
	putchar('\n');

	return (0);
}
