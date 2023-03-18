#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int l;
	int L;

	l = 97;
	L = 65;

	while (l < 123)
	{
		if (l == 101 || l == 113)
		{
			l++;
			continue;
		}
		else
		{
		putchar(l);
		l++;
		}
	}

	putchar(10);
	return (0);
}
