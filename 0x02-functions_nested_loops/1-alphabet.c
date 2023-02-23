#include "main.h"
/**
 * main: entry point
 *
 * print_alphabet: prints alphabets in lowercase.
 *
 * Description: prints the alphabets in lowercase, followed by a new line.
 *
 * Return:0
 */

int main(void)
{
	void print_alphabet(void)
	{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	}
}
