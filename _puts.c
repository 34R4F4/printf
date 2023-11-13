#include "main.h"

/**
 * _puts - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _puts(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
