#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; j < strlen(argv[i]); j++)
			if (!isdigit(argv[i][j]) && argv[i][j] != '-')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
