#include "main.h"
/**
 * print_diagonal - Function that draws a diagonal line
 * @n: Number of time the character
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
