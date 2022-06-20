#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: character value.
 *
 *Return: i value
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != 0; i++)
;
return (i);
}
