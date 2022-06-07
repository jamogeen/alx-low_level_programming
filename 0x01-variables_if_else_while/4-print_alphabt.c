#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: success(0)
 */
int main(void)
{
	int ln = 'a';

	for (; ln <= 'z'; ln++)
	{
		if (ln == 'q' || ln == 'e')
		{
			/* dont putchar q or e and contine*/
		}
		else
		{
			putchar(ln);
		}
	}
	putchar('\n');
	return (0);
}
