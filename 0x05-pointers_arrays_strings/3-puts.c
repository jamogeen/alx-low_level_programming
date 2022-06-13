#include "main.h"
#include<stdio.h>
/**
 * _puts - uses put to stdout
 * @str: expect pointer str referencing a string
 *
 * Return: None
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
