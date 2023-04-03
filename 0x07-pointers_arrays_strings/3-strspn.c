#include <stdio.h>
/**
 * _strspn - gets the number of bytes of s containing all of accept characters
 * @s: string to search in
 * @accept: substring to search for
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len_of_accept = 0;
	unsigned int count = 0;
	unsigned int max = 0;



	while (accept[len_of_accept] != '\0')
	{
		len_of_accept++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				if (i + 1 > max)
					max = i + 1;
			}
		}
	}
	printf("count: %d, len_of_accept: %d\n", count, len_of_accept);
	return (max);
}
