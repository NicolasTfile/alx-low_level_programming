#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr_c;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr_c = malloc(nmemb * size);
	if (ptr_c == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*(ptr_c + i) = 0;
	return (ptr_c);
}
