/**
 * rev_string - reverse the characters in a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int count = 0;
	int rscount = 0;
	char *rs;

	while (*(s + count) != '\0')
	{
		count++;
	}

	char rs[count + 1] = "";
	
	while (count >= 0)
	{
		rs[rscount] = *(s + count);
		count--;
		rscount++;
	}
	while (rscount >= 0)
	{
		*(s + count) = rs[rscount];
		count++;
		rscount--;
	}
}
