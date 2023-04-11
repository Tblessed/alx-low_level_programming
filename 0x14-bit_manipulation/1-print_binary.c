#include "main.h"
/**
 * print_binary - prints the binary representation of a numnber
 * @n: unsigned long, number to be represented in binary
 */
void print_binary(unsigned long int s)
{
	if (s > 1)
		print_binary(s >> 1);
	(s & 1) ? _putchar('1') : _putchar('0');
