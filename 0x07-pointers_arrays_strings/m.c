#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s = "hello, world";
	char *f = "olw";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
