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
	int i;

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

for (i = 0; s[i] != '\0'; i++)
{
	if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
	{
		_puts("\\x");
		l += 2;
		if (s[i] < 16)
		{
			_putchar('0');
			l++;
		}

		l += print_hex(s[i], 16, 1);
	}
	else
	{
		_putchar(s[i]);
		l++;
	}
}

	return (l);
}
