#include "main.h"

/**
 * _islower - checks lower case and uppercase
 * @c: expects integer c
 *
 * Return: 0 if lower case or 1 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

