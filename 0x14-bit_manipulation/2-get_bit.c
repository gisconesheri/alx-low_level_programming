#include <stdlib.h>
#include <stdio.h>
/**
 * get_bit - return the bit at the given index
 * @n: number to get the bits from
 * @index: position to get the bits from
 *
 * Return: Bit at the given index, -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	char *binary;
	unsigned int rem, i, len = 0;
	unsigned long int tn = n;

	while (tn > 1)
	{
		tn = tn >> 1;
		len++;
	}

	binary = malloc(sizeof(char) * (len + 1));
	tn = n;
	i = 0;

	while (i <= len)
	{
		rem = tn % 2;
		if (rem == 0)
			binary[i] = 48;
		if (rem == 1)
			binary[i] = 49;
		tn = tn >> 1;
		i++;
	}

	i = 0;
	while (i <= len)
	{
		if (i == index)
		{
			if (binary[i] == 48)
				return (0);
			if (binary[i] == 49)
				return (1);
		}
		i++;
	}

	return (-1);
}
