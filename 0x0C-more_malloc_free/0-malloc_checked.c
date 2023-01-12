#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size
 * Return: pointer to the allocated memory,
 * cause normal process termination with a status value of 98 if malloc fails.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
