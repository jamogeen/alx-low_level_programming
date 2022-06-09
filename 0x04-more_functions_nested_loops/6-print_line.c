#include "main.h"

/**
 * print_line - print from 1 to 14
 *@n: expect n as len of line
 *
 *Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0 && n != 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
