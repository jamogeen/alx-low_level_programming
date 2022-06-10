#include "main.h"

/**
 * print_triangle - print a triangle
 *@size: size of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0 && size != 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - 1); j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			if (i != size)
			{
				_putchar('\n');
			}
		}
	}
}
