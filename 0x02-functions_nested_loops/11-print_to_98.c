#include "main.h"

/**
 * print_to_98 - creates maths times table
 *@n: expect n
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if(n < 98)
	{
		for (n <= 98; n++)
		{
			if (n < 0)
			{
				n = n * -1
				if (n < 10)
				{
					_putchar('-');
					_putchar(n + '0');
				}
				else
				{
					_putchar('-');
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
				}
			}
			else if (n == 0)
			{
				_putchar(n + '0');
				_putchar(',');
			}
			else if (n < 98 && n > 1)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
			}
			else( n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
	}
	else if (n > 98)
	{
		for (n >= 98; n--)
		{
			if (n > 99)
			{
				_putchar((n / 100) + '0');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
			}
			else if(n == 99)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar(',');
			}
			else if (n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
	}
}
