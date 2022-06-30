#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @a: expect a string
 *
 * Return: returns capitalized words
 */
char *cap_string(char *a)
{
	int i, j;
	char d[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for  (i = 0; *(a + i) != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (*(a + i) == d[j] || i == 0)
			{
				if (*(a + i + 1) >= 97 && *(a + i + 1) <= 122)
				{
					a[i + 1] -= 32;
				}

			}
		}
	}
	return (a);
}
