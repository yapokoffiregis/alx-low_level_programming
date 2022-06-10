#include "main.h"

/**
 * print-most_numbers - print numbers from 0 to 9 without 2 and 4.
 *
 * return: void.
 */

void print-most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		if (i != 50 && i != 52)
		{
			if (i != 50 && i != 52)
				_putchar(i);
		}
	_putchar('\n');
}
