#include "function_pointers.h"
/**
 * int_index - search for an int
 * @array: the array tocheck int
 * @size: size of array
 * @cmp: compare function
 * Return:-1 if not present else in
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);

}
