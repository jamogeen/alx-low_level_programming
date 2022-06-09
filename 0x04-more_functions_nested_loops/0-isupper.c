#include"main.h"

/**
 * _isupper - check if C is upper.
 *@c: expect C
 *
 * Return: return 1 is C is upper or ) otherwise.
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
