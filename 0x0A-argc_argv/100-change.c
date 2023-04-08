#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - main method
 * @argc: size of argv
 * @argv: array of commands
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n, c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	c += n / 25;
	n %= 25;
	c += n / 10;
	n %= 10;
	c += n / 5;
	n %= 5;
	c += n / 2;
	n %= 2;
	c += n / 1;
	n %= 1;
	printf("%d\n", c);
	return (0);
}
