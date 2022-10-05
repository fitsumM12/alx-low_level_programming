
#include "search_algos.h"
/**
 * linear_search - Search for the value in an array of integer
 * @array: points to first element of the array
 * @size: The number of the elements in the array
 * @value: The value to search for 
 *
 * Return: The first index where value is located or if array is NULL, function must return -1.
 *
 */
int linear_search(int *array, size_t size, int value)
{
  size_t m;

  if (array == NULL)
    return (-1);
  for (m =0; m<size; m++)
    {
      printf("Value checked array [%ld] = [%d]\n", i, array[m]);
      if (array[m] == value)
	return (m);
    }
  return (-1);
}
