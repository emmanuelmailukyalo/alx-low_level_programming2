#include <stdio.h>

/**
 * main - Quote
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(STOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
