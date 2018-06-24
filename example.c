#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 10;
	int y = 10 * ++i ;
	printf("%i\n", y);
	// 100
	// 11 * 10 = 110
	int z = i++ * 10;
	printf("%d\n", z);
	// 101
	// 100
} 