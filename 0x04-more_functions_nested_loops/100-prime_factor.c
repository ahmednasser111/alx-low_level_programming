#include <stdio.h>
#include <math.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = sqrt(612852475143);

	for (; i >= 2; i--)
		if (612852475143 % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	return (0);
}
