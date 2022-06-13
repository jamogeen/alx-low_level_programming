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

	for (i = 0; *s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
