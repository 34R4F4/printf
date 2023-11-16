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
		}
		return (0);
	}

	while (*s != '\0')
	{
			if ((*s > 0 && *s < 32) || *s >= 127)
			{

				print_hex(*s, 16, 1);
				s++;
				l++;
			}
		_putchar(*s);
		s++;
		l++;
	}

	return (l);
}
