#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Program Entry
 *
 * Description: Program that takes 4 arguments where 2 are
 *              int variables plus an operator to perform
 *              a function between the two numbers
 *
 *              Usage: ./calc num1 operator num2
 *                         |     |       |     |_ argv[3]
 *                         |     |       |_ argv[2]
 *                         |     |_ argv[1]
 *                         |_ argv[0]
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0-on success
*/

int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
