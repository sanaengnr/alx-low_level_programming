#include "main.h"

/**
 * main - prints Holberton as a message.
 *
 * Return: Always 0 (success )
 */
int main(void)
{
	int str []={95,112,117,116,99,104,97,114};
	int count,SZ;

	SZ= sizeof(str)/sizeof(int);
	for (count = 0;count < SZ; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return(0);
}
