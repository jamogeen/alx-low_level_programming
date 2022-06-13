#include "main.h"

/**
 * rev_strin - print char in pointer in reverse
 *@s: expect s
 */
void rev_string(char *s)
{
	int length = 0, i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	length = length - 1;
	for (x = 0; x <= length;)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');
}
