#include "main.h"


/**
 * f_c - add a character to stdout
 *@c: buffer for character
 *Return: 1
 */

int f_c(int c)
{
	return write(1, &c, 1);
}

/**
 * f_s - add string to stdout
 * @arg: arguments to print
 *
 * Return: byte count
 */

int f_s(va_list arg)
{
	int c = 0;
	char str* = va_arg(arg, char *)
	
	while (str != NULL && str[c] != '\0')
	{
		f_c(str[i];
		i++;
	}
	return (i);
}

/**
 * f_mod - print modulus
 * @arg: arguments to print
 *
 * Return: 1
 */

int f_mod(va_list arg)
{
	void(arg);
	f_c('%');
	return (1);
}

