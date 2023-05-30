#include <stdio.h>

void main()
{
	int a, b;
	int *p1;
	int *p2;
	int *tmp;

	printf("a 값 입력 : ");
	scanf("%d\n", &a);

	printf("b 값 입력 : ");
	scanf("%d\n", &b);

	p1 = &a;
	p2 = &b;

	tmp = p1;
	p1 = p2;
	p2 = tmp;


	printf("바뀐 값 a는 %d, b는 %d", *p1, *p2);
}
