#include "main.h"

/**
 * swap_int - swap two numbers stored in  pointer
 *@a: expect pointer a
 *@b: expect pointer b
 */
void swap_int(int *a, int *b)
{
	int value_a = *a;

	*a = *b;
	*b = value_a;
}
