#include "main.h"

/**
 * isalpha - checks is a character in an alphabet
 * @c: expects integer c
 *
 * Return: 1 if c is a letter,lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
