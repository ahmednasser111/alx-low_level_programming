#include "main.h"
/**
 * jack_bauer - Prints from 00:00 to 23:59
 *
 *
 * Return: ...
 */
void jack_bauer(void)
{
	  for (int i = 0; i <= 2; i++)
	  {     
		  for (int j = 0; j <= 9; j++)
		  {       for (int k = 0; k <= 5; k++)
			  {         for (int q = 0; q <= 9; q++)
				  {
					  putchar(i + '0');
					  putchar(j + '0');
					  putchar(':');
					  putchar(k + '0');
					  putchar(q + '0');
					  putchar('\n');
					  if (i == 2 && j == 3 && k == 5 && q == 9)
						  return;
				  }
			  }
		}
	}
}
