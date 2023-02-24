#include "main.h"
#include <unistd.h>

/**
 * _putcha -writes the character c to stdout
 * @c: the character to print
 *
 * Return: 1 On Success
 * ON Error, return -1 and errno is set approprietly.
 */

int _putchar(char c)

{
	return (write(1, &, 1));
}
