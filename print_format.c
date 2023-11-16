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

	if (!specifier)
		return (0);

	if (specifier == 'c')
		count += _putchar(va_arg(args, int));
	else if (specifier == 's')
		count += _puts(va_arg(args, char *));
	else if (specifier == 'i')
		count += print_digit((long) (va_arg(args, int)), 10);
	else if (specifier == 'd')
		count += print_digit((long) (va_arg(args, int)), 10);
	else if (specifier == 'b')
		count += print_digit((unsigned int) (va_arg(args, unsigned int)), 2);
	else if (specifier == 'u')
		count += print_digit((unsigned int) (va_arg(args, unsigned int)), 10);
	else if (specifier == 'o')
		count += print_digit((unsigned int) (va_arg(args, unsigned int)), 8);
	else if (specifier == 'x')
		count += print_hex((unsigned int) (va_arg(args, unsigned int)), 16, 0);
	else if (specifier == 'X')
		count += print_hex((unsigned int) (va_arg(args, unsigned int)), 16, 1);
	else if (specifier == '%')
		count += (_putchar('%'));
	else
		if (specifier)
			count += (_putchar('%') + _putchar(specifier));
		else
			count += (_putchar('%'));

	return (count);
}
