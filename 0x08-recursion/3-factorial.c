#include "main.h"
#include <stdio.h>

/**
 * factorial - Function that returns the factorial of a number
 * @n: number to be factorised
 * Return: Factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
