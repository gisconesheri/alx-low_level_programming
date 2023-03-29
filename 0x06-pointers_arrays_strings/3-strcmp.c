int get_num(char c)
{
	int n = 31;

	while (n < 127)
	{
		if (c == n)
		{
			return (n);
			break;
		}
		n++;
	}
	return (0);
}
int _strcmp(char *s1, char *s2)
{
	int total = 0;
	int total2 = 0;
	int count;

	for (count = 0; s1[count] != '\0'; count++)
	{
		total = total + get_num(s1[count]);
	}
	count = 0;
	for (count = 0; s2[count] != '\0'; count++)
	{
		total2 = total2 + get_num(s2[count]);
	}

	return (total - total2);
}
