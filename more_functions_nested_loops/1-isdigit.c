#include "main.h"

/**
*checks for digets (0 through 9)
*
*
*retun 1 if c is a digit,0 other
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
