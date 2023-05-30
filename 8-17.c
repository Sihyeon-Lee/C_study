#include <stdio.h>

void main()
{
	int gugu[9][9];
	int i, k;

	for(i = 1; i < 10; i++)
	{
		for(k = 2; k < 10; k++)
		{
			gugu[i-1][k-2] = k*i;
			printf("%d X %d = %2d\t", k, i, gugu[i-1][k-2]);
		}
		printf("\n");
	}
}
