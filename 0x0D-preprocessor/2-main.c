/**
 * main - Entry point of the program
 *
 * Description: This program prints the name of the source file it was
 * compiled from to the standard output, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
