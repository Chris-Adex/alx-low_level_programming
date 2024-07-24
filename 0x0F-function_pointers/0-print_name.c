
/**
 * print_name - prints a name
 * @name: pointer to name to be printed
 * @f: pointer to a function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
