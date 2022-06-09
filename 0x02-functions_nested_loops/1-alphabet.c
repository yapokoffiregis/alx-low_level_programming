#include <stdio.h>
#include "main.h"

int main(void)
{
	void print_alphabet(void)
	{
		char i;

		for(i = 97; i <= 122; i++)
			putchar(i);
		putchar('\n');
	}
}
