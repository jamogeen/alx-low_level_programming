#include "main.h"
#include<stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;

	long int num = 612852475143;

	for (count = 2; num > count;  count++)
	{
		while (num % count ==0)
		{
			num = num / count;
		}
	}
	printf("%d\n", count);
	return (0);
}
