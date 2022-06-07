#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int index;

	while (index <= 9)
	{
		for (letter = 'a'; letter <= 'z';)
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		index++;
	}
}
