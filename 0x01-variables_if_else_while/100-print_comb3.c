#include <stdio.h>
/**
 * main - entry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x, y;

	for (x = 48; y <= 56; y++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (x > y)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
