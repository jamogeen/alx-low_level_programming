#include"main.h"

/**
 * string_toupper - changes all lower letters of a string to uppercase
 * @a: expect char
 *
 * Return: return the final characters
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; *(a + i); i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
		{
			*(a + i) = *(a + i) - 32;
		}
	}
	return (a);
}
