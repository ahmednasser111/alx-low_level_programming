#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = 0;
	for (; c <= 9; c++)
		putchar('0' + c);
	putchar('\n');
	return (0);
}
