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
	int l = 0;
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
					break;
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					_puts(va_arg(args, char*));
					break;
				default:
					_putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
		}

		*format++;
	}

	va_end(args);

	return (l);
}
