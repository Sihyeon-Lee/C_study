#include <stdio.h>

void main()
{
	int a, b;
	int *p1;
	int *p2;
	int *tmp;

	printf("a �� �Է� : ");
	scanf("%d\n", &a);

	printf("b �� �Է� : ");
	scanf("%d\n", &b);

	p1 = &a;
	p2 = &b;

	tmp = p1;
	p1 = p2;
	p2 = tmp;


	printf("�ٲ� �� a�� %d, b�� %d", *p1, *p2);
}
