#include "main.h"

/**
 * print_Str - writes the character c to stdout
 * @s: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_Str(char *s)
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
	if ((*s > 0 && *s < 32) || *s >= 127)
	{
		_puts("\\x");
		l += 2;
		if (*s < 16)
		{
			_putchar('0');
			l++;
		}

		l += print_hex(*s, 16, 1);
	}
}

	return (l);
}
