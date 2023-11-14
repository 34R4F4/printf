#include "main.h"

/**
 * print_format -  f
 *
 * @specifier: 1
 * @args: 2
 *
 * Return: count
 */

int print_format(char specifier, va_list args)
{
	int count = 0;

	if (specifier == 'c')
		count += _putchar(va_arg(args, int));
	else if (specifier == 's')
		count += _puts(va_arg(args, char *));
	else if (specifier == 'i')
		count += print_digit((long) (va_arg(args, int)), 10);
	else if (specifier == 'd')
		count += print_digit((long) (va_arg(args, int)), 10);
	else if (specifier == '%')
		count += (_putchar('%'));
	else
		count += (_putchar('%') + _putchar(specifier));

	return (count);
}
