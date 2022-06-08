
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

	last_digit = i % 10;
	putchar(last_digit);
	return (last_digit);
}
