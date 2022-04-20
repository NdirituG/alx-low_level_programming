#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of array
 * @a: array to be used
 * @n: length of array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= 1; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
