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
	int l = 0;

	if (!s)
	{
		char *e = "(null)";

		while (*e)
		{
			_putchar(*e);
			e++;
			l++;
		}
		return (l);
	}

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		l++;
	}

	return (l);
}
