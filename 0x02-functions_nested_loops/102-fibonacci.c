#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int total[50];

	total[0] = 1;
	total[1] = 1;
	printf("%d, ", total[0]);
	printf("%d, ", total[1]);

	for (int count = 2; count < 50; count++)
	{
		total[count] = total[count - 1] + total[count - 2];
		printf("%d, ", total[count]);
	}
	return (0);
}
