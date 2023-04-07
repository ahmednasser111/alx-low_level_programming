#include <stdio.h>
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
	int i = 0;
	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
