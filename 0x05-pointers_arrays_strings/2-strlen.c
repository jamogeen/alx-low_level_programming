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
	int length;
	char a = *s;

	length = strlen(a);
	return (length);
}
