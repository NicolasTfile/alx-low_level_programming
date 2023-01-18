#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 *       if it matches
 *
 * Return: Always 0 (Success)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
