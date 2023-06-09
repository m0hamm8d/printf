#include "main.h"

/**
 * print_number - print num
 * @x: number that printed
 *
 * Return: number of digit
 */
int print_number(va_list x)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(x, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
