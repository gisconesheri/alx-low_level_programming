/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int c;
	int count = 10;

	while (count < 10)
	{
		c = 97;
		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		count++;
	}
}
