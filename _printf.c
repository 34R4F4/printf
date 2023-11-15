#include "main.h"
/**
 * _printf - varledic function to print multi-parameter string
 * @format: the vars
 *
 * Return: integer
 */


int _printf(const char *format, ...)
{
	int prints = 0;
	va_list args;

	va_start(args, format);
	if (!format)
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			prints += print_format(*++format, args);
		}
		else if (*format == 92)
		{
			++format;
			if (*format == 'n')
				_putchar(10);
			else if (*format == 't')
				_putchar(9);
			else
				prints += (_putchar(92) + _putchar(*format));
		}
		else
		{
			prints += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (prints);
}
