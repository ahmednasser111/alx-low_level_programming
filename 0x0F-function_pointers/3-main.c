#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Entry point for simple calculator program
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 98 on incorrect number of arguments,
 * 99 on invalid operator, and 100 on division/modulo by 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(operator);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(operator, "/") == 0 || strcmp(operator, "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
