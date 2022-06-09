#include "main.h"

/**
 * print_square - check the code
 *@size: size of the sqaure
 *
 * Return: Always void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size >= 1 && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			if (j != size)
			{
				_putchar('\n');
			}
		}
	}
}
