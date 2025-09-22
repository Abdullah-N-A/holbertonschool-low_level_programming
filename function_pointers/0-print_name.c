#include "function_pointers.h"

/**
 * print_name - prints a name using the given function pointer
 * @name: name of the person
 * @f: pointer to a function that takes a char * and returns void
 *
 * Description: This function calls the function f on the given name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
