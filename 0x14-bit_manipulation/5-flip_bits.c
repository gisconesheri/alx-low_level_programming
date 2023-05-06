#include <stdlib.h>
#include <stdio.h>

char *get_binary(unsigned long int num)
{
	char *binary_string;
	unsigned long int i , rem = 0;

	binary_string = malloc(sizeof(char) * 65);

	while (i <= 64)
	{
		rem = num % 2;
		if (rem == 0)
			binary_string[i] = 48;
		else if (rem == 1)
			binary_string[i] = 49;
		else
			binary_string[i] = 48;
		num = num >> 1;
		i++;
	}
	printf("n in binary is %c\n", binary_string[34]);

	return (binary_string);
}

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char *binary_one;
	char *binary_two;
	unsigned long int n1 = n;
	unsigned long int m1 = m;

	binary_one = malloc(sizeof(char) * 65);
	binary_two = malloc(sizeof(char) * 65);
	
	binary_one = get_binary(n1);
	binary_two = get_binary(m1);

	printf("n in binary is %c\n", binary_one[1]);
	printf("m in binary is %c\n", binary_two[1]);

	if (binary_one == NULL || binary_two == NULL)
		return (0);

	return (0);
}

int main(void)
{
	flip_bits(1024, 1);
	return (0);
}
