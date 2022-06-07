#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int n, lastnumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastnumber = n % 10;
	if (lastnumber == 0)
	{
		printf("Last digit of %d is %d and is 0", n, lastnumber);
	} else if (lastnumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, lastnumber);
	} else if (lastnumber != 0 && lastnumber < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lastnumber);
	}
	return (0);
}
