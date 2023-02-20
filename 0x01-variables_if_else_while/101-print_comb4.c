#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Returns: Always 0 (Success)
 */

int main(void)

{
	int d, r, s; 

	for (d = '0'; d < '9'; d++)
	{
	for (r = d + 1; r <= '9'; r++)
	{
	for (s = r + 1; s <= '9'; s++)
	{
	if ((r != d) != s)
	{
	putchar(d);
	putchar(r);
	putchar(s);
	if (d == '7' && r == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
