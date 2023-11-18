#include "main.h"

/**
 * print_Ptr - writes the character c to stdout
 * @ptr: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_Ptr(unsigned long ptr)
{
	if (!ptr)
		return;

	_puts("0x");
	print_hex(ptr, 16, 0);
}
