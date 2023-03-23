#include "main.h"

void more_numbers(void)
{
	int i;
	int lines = 0;

	while (lines < 10)
	{
		i = 48;

		while (i < 58)
		{
			_putchar(i);
			i++;
		}

		_putchar(10);
		lines++;
	
	}
}
