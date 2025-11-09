#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (n = 0; n < 10; n++)
			{
				if (!(i == j || j == n || i == n))
				{
					printf("%d%d%d, ", i, j, n);
				}
				if (!(i == 7 && j == 8 && n == 9))
				{
					printf(", ");
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
