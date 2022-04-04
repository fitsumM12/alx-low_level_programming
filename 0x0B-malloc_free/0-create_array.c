#include "main.h"
#include <stdlib.h>
/**
 * create_array - create the memory allocation for an array
 * @size: size of the array.
 * @c: the character
 * Return: the pointer to the address or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(c) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
