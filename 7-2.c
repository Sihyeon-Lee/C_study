#include <stdio.h>

void main()
{
	int hap=0;
	int i;

	i = 0;
	while ( i <= 10) {
		hap = hap + i;
		i++;
	}

	printf(" 1���� 10������ ��: %d \n", hap);
}
