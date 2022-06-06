#include <stdio.h>

/**
 * main - alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char i;
	char tab[26] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i <= 24; i++)
		putchar(tab[i]);
	putchar('\n');
	return (0);
}
