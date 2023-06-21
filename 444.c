#include<stdio.h>

void main() {
	int i, k;

	for (i = 2, k = 1; i < 10; k++) {
		printf("%d * %d = %d\n", i, k, i*k);

		if ( k == 9) {
			i++;
			k = 0;
			printf("\n");
		}
	}
}

