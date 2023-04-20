#include <stdio.h>
#include <stdlib.h>

void print_opcodes(char *p, int n);

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if wrong number of arguments, 2 if negative n
 */
int main(int argc, char **argv)
{
      int n;

      if (argc != 2)
      {
            printf("Error\n");
            return (1);
      }

      n = atoi(argv[1]);

      if (n < 0)
      {
            printf("Error\n");
            return (2);
      }

      print_opcodes((char *)&main, n);

      return (0);
}

/**
 * print_opcodes - prints the opcodes of a function
 *
 * @p: pointer to the function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *p, int n)
{
      int i;

      for (i = 0; i < n; i++)
      {
            printf("%02hhx", *(p + i));
            if (i < n - 1)
                  printf(" ");
      }

      printf("\n");
}
