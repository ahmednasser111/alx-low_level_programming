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
	int sum = 0, i = 1, j, n;

	for (; i < argc; i++)
	{
		n = strlen(argv[i]);
		for (j = 0; j < n; j++)
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
