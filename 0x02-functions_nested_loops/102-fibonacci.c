#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int i;

	printf("%d, %d, ", num1, num2);

	for (i = 0; i < 48; i++)
	{
		int num3 = num1 + num2;

		printf("%d, ", num3);
		num1 = num2;
		num2 = num3;
	}
	putchar(10);

	return (0);
}
