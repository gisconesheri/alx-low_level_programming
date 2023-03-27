#include "main.h"
/**
 * puts_half - prints the half part of a string
 * @str: string to print
 */

void puts_half(char *str)
{
	int count = 0;
	int pc = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		pc = count / 2;

		while (pc != count + 1)
		{
			_putchar(*(str + pc));
			pc++;
		}
	}
	else
	{
		pc = (count - 1) / 2;
		pc++;

		while (pc != count + 1)
		{
			_putchar(*(str + pc));
			pc++;
		}
	}
	_putchar(10);
}
