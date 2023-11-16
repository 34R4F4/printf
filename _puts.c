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

	while (*s != '\0')
	{
		if (*s == 92)
		{
			_putchar(92);
			s++;
			l++;
			if ((*s > 0 && *s < 32) || *s >= 127)
			{
				print_hex(*s, 16, 1);
				s++;
				l++;
			}
		}
		_putchar(*s);
		s++;
		l++;
	}

	return (l);
}
