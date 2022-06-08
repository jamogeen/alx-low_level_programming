
#include "main.h"

/**
 * print_last_digit - returns the last digit
 * @i: expects integer i
 *
 * Return: returns the last digit of number
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
	{
		i = i * -1;
	}

	last_digit = i % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
