#include"main.h"

/**
 * puts_half  - print char in pointer in reverse
 *@str: expect str
 */
void puts_half(char *str)
{
	int length = 0, i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		n = length / 2;
		for (n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		n = (length - 1) / 2;
		for (n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
