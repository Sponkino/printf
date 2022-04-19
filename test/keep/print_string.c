#include "main.h"
#include <stdarg.h>

/**
 * print_string - Print a string.
 * @s: string address.
 * Return: integer.
 */

int print_string(va_list s)
{
	char *string = va_arg(s, char *);
	int i;

	if (string == NULL)
		string = "(null)";

	for (; string[i]; i++)
		_putchar(string[i]);
	i++;

	return (i);
}
