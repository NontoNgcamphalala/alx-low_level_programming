#include "main.h"

/**
 * jack_bauer - prints every minutes of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */

void jack_bauer(void)

{
	int b, h;

	b = 0;

	while (b < 24)
	{
		h = 0;
		while (h < 60)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
			h++;
		}
		b++;
	}
}
