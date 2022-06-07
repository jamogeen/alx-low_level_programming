#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int ln;

	ln = 'a';
	while (ln <= 'z')
	{
		putchar(ln);
		ln++;
	}
	ln = 'A';
	while (ln <= 'Z')
	{
		putchar(ln);
		ln++;
	}
	putchar('\n');
	return (0);
}
