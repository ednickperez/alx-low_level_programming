#include "stdio.h"
/**
 *  * leet - encode
 *   * @s: pointer to char params
 *    * Return: *s
**/
char *leet(char *s)
{
	int i;
	int j;
	char l[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			for (j = 0; l[j] != '\0'; j++)
			{
				s[i] = j + '0';
			}
		}
	}
	return (s);
}

