#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)

{
	int e, f, g;

	for (e = 0; e < 10; e++)
	{
		for (f = 0; f < 10; f++)
		{
			g = e * f;
			if (f == 0)
			{
				_putchar(g + '0');
			}
			if (g < 10 && f != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(g + '0');
			} else if (g >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((g / 10) + '0');
				_putchar((g % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
