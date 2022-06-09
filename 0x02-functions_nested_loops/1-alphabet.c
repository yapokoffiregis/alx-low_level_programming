#include <stdio.h>

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
}
