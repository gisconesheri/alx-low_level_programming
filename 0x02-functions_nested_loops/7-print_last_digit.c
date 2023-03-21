/**
 * print_last_number - prints the last number in the provided integer
 * @n: number to work on
 *
 * Return: The last digit of the number provided without a sign
 */

int print_last_number(int n)
{
	/* call the absolute function defined in 6-abs.c*/
	int absN;
	int lastDigit;

	if (n >= 0)
	{
		absN = n;
	}
	else
	{
		absN = n * -1;
	}

	lastDigit = absN % 10;

	_putchar(lastDigit);
	return (lastDigit);
}

