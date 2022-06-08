#include "main.h"

/**
 * print_sign - check if a value is negative, zero or positive
 * @n: expects integer n
 *
 * Return: 0 if n zero,-1 if <= -1 and 1 otherwise
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
