#include <stdio.h>

/**
 * main - lowercase and uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char j;
	
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	for (j = 65; j <= 90; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);

}
