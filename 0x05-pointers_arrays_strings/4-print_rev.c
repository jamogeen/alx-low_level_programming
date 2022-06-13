#include "main.h"

/**
 * print_rev - print char in pointer in reverse
 * @s: expect s
 */
void print_rev(char *s)
{
	int length = 0, i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (x = 0; x <= length;)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
