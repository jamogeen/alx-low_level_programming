#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int index;

	for (index = 0; index <= 9; index++)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
