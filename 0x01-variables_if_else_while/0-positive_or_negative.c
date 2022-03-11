#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 * this code will find positive and negative number and display as positive and negative 
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n >0)
	{
	printf("The number is positive");
	}
	else
	{
	printf("The number is negative");
	}
	return (0);
}
