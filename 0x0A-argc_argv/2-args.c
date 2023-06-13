#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments that are received
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (if Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
