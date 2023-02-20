#include<stdio.h>

/**
 * main - Print alphabet, lower & upper cases
 *
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c<= 'z'; c++)
	    putchar(c);

	putchar('\n');
	return (0);
}
