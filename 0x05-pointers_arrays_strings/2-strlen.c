#include "main.h"
#include<string.h>
/**
 * _strlen - compute the size of char
 * @s: expect pointer s
 *
 * Return: return lenth of the string
 */
int _strlen(char *s)
{
	int length = 0, i;
	char a = *s;

	for (i = 0; a[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
