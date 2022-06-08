
#include "main.h"

/**
 * times_table - 9x9 mulyiplication table
 *
 * Return: void
 */
void times_table(void);
{
	int x, y, product;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar((y * x) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

