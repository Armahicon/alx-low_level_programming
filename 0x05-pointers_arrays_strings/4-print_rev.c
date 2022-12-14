#include "main.h"

/**
 * print_rev - reverse the charcter in a string and prints them
 * @s: pointer character of string
 * Return: reversed string
 */
void print_rev(char *s)
{
	char rev[1000];
	int index, j, count = 0;

	while (s[count] != '\0') /* finding length of string*/
	{
		count++;
	}
	j = count - 1;

	/*reversing string*/
	for (index = 0; index < count; index++)
	{
		rev[index] = s[j];
		j--;
		_putchar(rev[index]);
	}
	_putchar('\n');
}
