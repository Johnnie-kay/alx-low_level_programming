#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
		a = -1 * (n % 10);

	else
		a = n % 10;

	_putchar((a % 10) + '0');

	return (a % 10);
}
