#include"main.h"
#include<stdio.h>
/**
 * _strcat -  concatenates two strings
 *@dest: expect dest
 *@src: expect src char
 *
 * Return: return the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, x, length;

	length = 0;

	for (i = 0; *(dest + i) != '\0'; i++)
	{
		length++;
	}

	for (x = 0; *(src + x) != '\0'; length++)
	{
		dest[length] = src[x];
		x++;
	}
	dest[length] = '\0';

	return (dest);
}


