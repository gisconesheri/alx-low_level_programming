#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	int x = 0;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		x = atoi(argv[i]);
		if (x <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + x;
	}
	printf("%d\n", sum);
	return (0);
}
