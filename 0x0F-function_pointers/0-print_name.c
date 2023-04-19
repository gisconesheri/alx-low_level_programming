/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: function to call back to do the heavy lifting
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
