#include <stdio.h>
#include <math.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	
	long n = 612852475143;
	long i = n / 2;
	for (; i > 2; i--)
		if (n % i == 0)
		{
			printf("%ld\n", i);
			break;
		}
	return (0);
}
