#include <stdio.h>

/**
 * main - prints the numbers from 0 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j;

	for (; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
			putchar(' ');
	}
}
