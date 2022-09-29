#include "stdio.h"
/**
 *  * puts_recursion - prints a string
 *   * @s: the pointer input
**/
void puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	puts_recursion(++s);
}
