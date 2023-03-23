#include <stdlib.h>
#include <time.h>
#include <stdio.h>
void main()
{
	int n;
	n=srand(time(0));;
	if (n==0)
		printf("%d is zero\n", n);
	else if (n<0)
		printf("%d is negative\n" ,n);
	else 
		printf("%d is positive\n" ,n);
}
