#include <stdio.h>
#include <libgen.h>
/**
 * main - main method
 * @argc: size of argv
 * @argv: array of commands
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", basename(argv[0]));
}
