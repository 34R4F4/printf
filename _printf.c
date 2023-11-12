#include "main.h"
/**
 * _printf - varledic function to print multi-parameter string
 * @format: the vars
 *
 * Return: integer
 */
int _printf(const char *format, ...);
{
	va_list args;

	va_start(args, format);
	int i;

	if (!format)
		return (-1);

	for (i = 0, format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			*format++;
			switch (*format)
			{
			case '%':
				_putchar('%');
				break;
			case 'c':
				_putch(va_arg(args, int));
				break;
			case 's':
				char *s = va_arg(args, *char);

				while (*s)
				{
					_putchar(*s);
					s++;
				}
				break;
			default:
				_putchar(*format);
			}

			if (*format == '\0')
				return (0);
		}
	}
}
