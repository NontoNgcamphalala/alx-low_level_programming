#include "main.h"

/**
 * print_times_table -  prints the n times table, starting with 0
 * @n: number of the times table
 */

void print_times_table(int n)

{
	int g, h, i;

	if (n >= 9 && n <= 15)
	{
		for (g = 0, g <= n, g++)
		{
			for (h = 0, h <= n, h++)
			{
				i = h * g;
				if (h == 0)
				{
					_putchar(i + '0');
				} else if (i < 10 && h != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(i + '0');
				} else if (i >= 10 && i < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				} else if (i >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((i / 100) + '0');
					_putchar(((i / 10) % 10) + '0');
					_putchar((i % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
