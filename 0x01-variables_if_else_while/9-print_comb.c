/*
 *  * File: 9-print_comb.c
 *   * Auth: Kirui
 */

#include <stdio.h>

/**
 *  * main - Prints all possible combinations of single-digit numbers.
 *   *
 *    * Return: Always 0.
 **/
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{

		for (num = 0; num <= 9; num++)
			if (num == 9)
				continue;

		putchar(',');
	}

putchar('\n');
return (0);
}
