#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int l1, l2;
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    char *str = " \nhelow blal l bsvb 5116dfdhb  , $5 jhs\n";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    _printf("*\n");
    printf("*\n");
    _printf("%%%\n");
    printf("%%%\n");
    _printf("A\trafa\n");
    printf("A\trafa\n");
    _printf(NULL);
    printf(NULL);
    _printf("%b\n", 98);
    printf("%b\n", 98);

	len = _printf("%K\n");
	printf("%K\n");
	len = _printf("%!\n");
	printf("%!\n");
	printf("\n--------\n");
	len = _printf("%");
	printf("\n--------\n");
	len2 = printf("%");
	printf("\n--------\n");
	_printf("\n%d\t%d\n", len, len2);
	printf("\n%d\t%d\n", len, len2);
	len = _printf("%c", '\0');
	len2 = _printf("%c", '\0');
	printf("\n%d\t%d\n", len, len2);
	printf("\n%d\t%d\n", len, len2);
	_printf(NULL);
	printf(NULL);
	_printf("\n");
	printf("\n");
	_printf("man gcc:\n%s", str);
	printf("man gcc:\n%s", str);
	_printf(str);
	printf(str);
	len = _printf("css%ccs%scscscs", 'T', "Test");
	len2 = printf("css%ccs%scscscs", 'T', "Test");
	printf("\n%d\t%d\n", len, len2);
        _printf("%d\t%d\n", len, len2);
	len = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	len2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("\n%d\t%d\n", len, len2);
        _printf("\n%d\t%d\n", len, len2);
	len = _printf("Should print a single percent sign: %%\n");
	len2 = printf("Should print a single percent sign: %%\n");
	printf("%d\t%d\n", len, len2);
        _printf("%d\t%d\n", len, len2);
	len = _printf("%%\n");
	len2 = printf("%%\n");
	printf("%d\t%d\n", len, len2);
        _printf("%d\t%d\n", len, len2);
	len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%d\t%d\n", len, len2);
        _printf("%d\t%d\n", len, len2);
	len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d\t%d\n", len, len2);
        _printf("%d\t%d\n", len, len2);
	len = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	len2 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d\t%d\n", len, len2);
	_printf("%d\t%d\n", len, len2);
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	_printf("%s", "This sentence is retrieved from va_args!\n");
	printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("%c", 'S');
	printf("%c", 'S');
	_printf("Let's print a simple sentence.\n");
	printf("Let's print a simple sentence.\n");
	l1 = _printf("%S\n", "Best\nSchool");
	l2 = printf("%S\n", "Best\nSchool");
	printf("%d\t%d\n", l1, l2);
        _printf("%d\t%d\n", l1, l2);

    return (0);
}
