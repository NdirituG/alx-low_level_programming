#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers
 * @a: Value to be swap
 * @b: Value to be swap
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;
}
