#include "main.h"

/**
 * print_hex - f
 * @n: 1
 * @base: 2
 * @s: 3
 * Return: n
 */
int print_hex(long n, int base, int s)
{
	int c;
	char *x = "0123456789abcdef";
	char *z = "0123456789ABCDEF";

	if (s > 0)
	{
	if (n < 0)
	{
		_putchar('-');
		return (print_hex(-n, base, 1) + 1);
	}
	else if (n < base)
	{
		return (_putchar(z[n]));
	}
	else
	{
		c = print_hex(n / base, base, 1);
		return (c + print_hex(n % base, base, 1));
	}
	}
	else
	{
	if (n < 0)
	{
		_putchar('-');
		return (print_hex(-n, base, 0) + 1);
	}
	else if (n < base)
	{
		return (_putchar(x[n]));
	}
	else
	{
		c = print_hex(n / base, base, 0);
		return (c + print_hex(n % base, base, 0));
	}
	}
}
