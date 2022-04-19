#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			if (i < 100)
			{
				putchar(' ');
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i < 100)
			{
				putchar(' ');
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i < 100)
			{
				putchar(' ');
			}
		}
		else
		{
			printf("%d", i);
			if (i < 100)
			{
				putchar(' ');
			}
		}
	}
	putchar(10);

	return (0);
}
