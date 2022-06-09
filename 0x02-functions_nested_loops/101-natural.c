#include <stdio.h>
/**
 *  main - entry point
 *
 *  Return: success(0)
 */
int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sum = sum + i;
		}
		else if ((i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
