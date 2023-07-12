#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number of bit to evaluate
 * @index: index starts at (0)
 * Return: Value of bit at index, on failure (-1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
