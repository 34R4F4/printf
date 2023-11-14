#include "main.h"
/**
 * _printf - varledic function to print multi-parameter string
 * @format: the vars
 *
 * Return: integer
 */
#include "main.h"


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
		} else
		{
			prints += _putchar(*format);
		}
		++format;
	}
	va_end(args);
	return (prints);
}
