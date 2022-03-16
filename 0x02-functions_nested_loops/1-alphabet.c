#include "main.h"
/**
* print_alphabet - This program prints the alphabet 'a-z'
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
