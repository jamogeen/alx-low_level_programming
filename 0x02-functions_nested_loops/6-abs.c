#include "main.h"

/**
 * _abs - compute absolute value of int
 * @i: expects integer i
 *
 * Return: return absolute value
 */
int _abs(int i)
{
	if (i < 1)
	{
		i = i * -1;
	}
	else
	{
		i = i;
	}
	return (i);
}

