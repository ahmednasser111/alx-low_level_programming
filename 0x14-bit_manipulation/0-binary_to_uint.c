#include "main.h"
/**
 * binary_to_uint - Convert binary to unsigned int
 * @b: a binary number
 *
 * Return: an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	unsigned int n = strlen(b), uint = 0, i = 0;

	for (; i < n; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		uint += pow(2, i) * (b[n - i - 1] - '0');
	}
	return (uint);
}
int main()
{
	char *s = "1010";
	printf("%d", binary_to_uint(s));
}