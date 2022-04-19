#include "main.h"
/**
 * more_numbers - Function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 0 && j <= 9)
				n = (j + '0');
			else
			{
				n = ((j % 10) + '0');
				_putchar(j / 10 + '0');
			}
			_putchar(n);
		}
		_putchar(10);
	}
}
