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
			format++;
			switch (*format)
			{
				case '%':
					_putchar('%');
					prints++;
					break;
				case 'c':
					_putchar(va_arg(args, int));
					prints++;
					break;
				case 's':
					_puts(va_arg(args, char*));
					prints += _strlen(va_arg(args, char*));
					break;
				default:
					_putchar(*format);
					prints++;
			}
		} else
		{
			_putchar(*format);
			prints++;
		}
		format++, prints++;
	}
	va_end(args);
	return (prints);
}
