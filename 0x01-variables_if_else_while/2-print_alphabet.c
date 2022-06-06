#include <stdio.h>

/**
 *  main - alphabet in lowercase
 *
 *  Return: Always 0 (success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
