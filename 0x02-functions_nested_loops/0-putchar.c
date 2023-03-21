#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *s = "_putchar\n";

	while (*s)
	{
		_putchar(*s);
		s++;
	}
	return (0);
}
