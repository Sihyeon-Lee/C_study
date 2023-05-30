#include <stdio.h>

void main()
{
	FILE *wfp;
	
	wfp = fopen("C:\\c_study\\gugu.txt", "w");

	for(int i = 2; i <= 9; i++)
	{
		fprintf(wfp,"  #Á¦%d´Ü# \t", i);
	}

	fprintf(wfp,"\n\n");

	for(int i = 1; i <= 9; i++)
	{
		for(int j = 2; j <= 9; j++)
		{
			fprintf(wfp, "%d X %d = %2d\t", j, i, j*i);
		}
		fprintf(wfp, "\n");
	}

	fclose(wfp);
}
