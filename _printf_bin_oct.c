#include "main.h"

/**
 * printf_b - print a formatted binary.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */

unsigned int printf_b(va_list val, int counter)
{
	long int binary = va_arg(val, unsigned int);
	int i = 0, j = 0;
	char table[51];

	counter = 0;
	if (!binary)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		while (binary)
		{
			table[j++] = (binary % 2) + '0';
			binary /= 2;
			i++;
		}

		while (--i >= 0)
		{
			_putchar(table[i]);
			counter++;
		}
	}

	return (counter);
}

/**
 * printf_o - print a formatted binary.
 * @val: string to print - may contain directives.
 * @counter: character counter.
 * Return: # of characters printed.
 */

unsigned int printf_o(va_list val, int counter)
{
	long int octal = va_arg(val, unsigned int);
	unsigned int tmp;
	int i = 0, j = 0, len = 0;
	char *table;

	tmp = octal;
	while (tmp /= 8)
		++len;
	table = malloc(len * sizeof(char *));
	counter = 0;

	if (!octal)
	{
		_putchar('0');
		counter++;
	}
	else
	{
		while (octal)
		{
			table[j++] = (octal % 8) + '0';
			octal /= 8;
			i++;
		}

		while (--i >= 0)
		{
			_putchar(table[i]);
			counter++;
		}
	}
	free(table);
	return (counter);
}

