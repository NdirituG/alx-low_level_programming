#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Number of arguments passed
 * @argv: Array of strings
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

