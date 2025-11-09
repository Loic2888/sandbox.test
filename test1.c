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

	for (i = 0; i <= 7; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			for (n = j + 1; n <= 9; n++)
			{
				printf("%d%d%d", i, j, n);

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
