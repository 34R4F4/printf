#include "main.h"

/**
 * print_digit - f
 * @p: 1
 * Return: n
 */
int print_digit(long n, int base)
{
	int c;
	char *digits = "0123456789abcdef";

	if (n < 0)
	{
		_putchar('-');
		return (print_digit(-n, base) + 1);
	}
	else if (n < base)
	{
		return _putchar(digits[n]);
	}
	else
	{
		c = print_digit(n / base, base);
		return (c + print_digit(n % base, base));
	}
}
