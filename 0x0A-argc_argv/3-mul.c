#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that multiplies two numbers
 * @argc: Number of arguments passed
 * @argv: Array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	printf("%d\n", i * j);

	return (0);
}
