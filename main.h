#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER 1024

int _putchar(char c);
int _puts(char *s);
int _strlen(char *s);
int print_format(char specifier, va_list args);
int print_digit(long n, int base);
int print_hex(long n, int base, int s);
int print_Str(char *s);

int _printf(const char *format, ...);

#endif
