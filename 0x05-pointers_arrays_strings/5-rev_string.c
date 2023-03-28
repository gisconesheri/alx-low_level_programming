#include <stdio.h>

/**
 * rev_string - reverse the characters in a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int count = 0;
	int rscount = 0;
	char rs[1000];
	int icount = 0;

	printf("%s", rs);

	while (*(s + count) != '\0')
	{
		count++;
	}

	icount = count;
	
	while (count >= 0)
	{
		rs[count] = s[count];
		count--;
	}
	while (icount >= 0)
	{
		s[icount] = rs[rscount];
		rscount++;
		icount--;
	}
}
