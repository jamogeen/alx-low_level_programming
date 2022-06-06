#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success(0)
 */
int main(void)
{
	int dsint;
	char dschar;
	long int dslongint;
	long long int llongint;
	float dsfloat;

	printf("Size of a char: %zu byte(s)\n", sizeof(dschar));
	printf("Size of an int: %zu byte(s)\n", sizeof(dsint));
	printf("Size of a long int: %zu byte(s)\n", sizeof(dslongint));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llongint));
	printf("Size of a float: %zu byte(s)\n", sizeof(dsfloat));
	return (0);
}
