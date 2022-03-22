#include "main.h"
/**
 * puts_half - This function prints half of the string
 * followed by a newline
 * @str: the string to be evaluated
 */
void puts_half(char *str)
{
	int i, n;

	n = sizeof(str);

	for (i = n / 2 + 1; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
}
