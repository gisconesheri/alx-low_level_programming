/**
 * _strncpy - copies n bytes from src to dest
 * @dest: location to copy the string
 * @src: string to copy
 * @n: number of bytes to copy
 * Return: pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
