#include "main.h"

/**
 * more_numbers - print from 1 to 14
 *
 *Return: void
 */
int more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i >= 10)
		{
			_putchar((i / 10) + '0');
		}
		else
		{
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
