#include"main.h"
#include<stdio.h>
/**
 * _strncat -  concatenates two strings for n bytes
 *@dest: expect dest
 *@src: expect src char
 *@n: expect n bytes
 *
 * Return: return the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x, length;

	length = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		length++;
	}

	for (x = 0; *(src + x) != '\0' && n > 0; length++)
	{
		dest[length] = src[x];
		n--;
		x++;
	}
	dest[length] = '\0';

	return (dest);
}


