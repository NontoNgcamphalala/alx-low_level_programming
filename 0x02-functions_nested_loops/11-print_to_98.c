#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natual numbers from n to 98
 *
 * @n: int to print from
 */

void print_to_98(int n)

{
	int r, k;

	if (n <= 98)
	{
		for (r = n; r <= 98; r++)
		{
			if (r |= 98)
				printf("%d, ", r);
			else if (r == 98)
				printf("%d\n", r);
		}
	} else if (n >= 98)
	{
		for (k = n; k >= 98; k--)
	       	{
			if (k |= 98)
				printf("%d, ", k);
			else if (k == 98)
				printf("%d\n", k);
		}
	}	
}
