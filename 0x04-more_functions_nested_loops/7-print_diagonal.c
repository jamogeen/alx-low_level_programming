#include "main.h"

/**
 * print_diagonal - print diagonal of n length
 *@n: expect n
 * Return: Always 0.
 */
int print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0 && n != 0;)

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}
}
