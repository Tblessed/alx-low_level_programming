#include "main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */
unsigned int binary_to_uint(const char *d)
{
	unsigned int uint, place;
	int n;

	if (!d)
		return (0);

	for (n = 0; d[n]; n++)
		;
	n--;
	for (place = 1, uint = 0; n >= 0; n--)
	{
		if (d[n] == '0')
		{
			place *= 2;
			continue;
		}
		else if (d[n] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
