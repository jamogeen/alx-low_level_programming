
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry point
 *
 * Return: success(0)
 */
int main(void)
{
	int n, lastno;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastno = n % 10;
	if (lastno > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastno);
	}
	else if (lastno == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastno);
	}
	else if (lastno < 6 && lastno != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastno);
	}
	printf("\n");
	return (0);
}
