#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptrna;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptrna = malloc(sizeof(int) * size);

	if (ptrna == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		*(ptrna + i) = min;
		min++;
	}

	return (ptrna);
}
