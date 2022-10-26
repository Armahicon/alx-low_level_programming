#include "main.h"

/**
 * puts_half - prints second half of a string
 * if string length is odd, print last n chars of the string
 * @str: string variable
 * Return: half-string
 */
void puts_half(char *str)
{
	int string = 0, hald_string;

	while (str[string] != '\0')
	{
		string++;
	}
	if (string + 1 % != '0')
	{
		half_string = (string - 1) / 2;
	}

	else
	{
		half_string = (string / 2);
	}
	half_string++;

	for (string = half_string; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
	_putchar('\n')
}
