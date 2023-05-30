#include <stdio.h>

void main()
{
	int a, b, c;
	char d;

	printf("수식을 한줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &d, &b);

	switch (d)
	{
		case '+' : 
			c = a + b;
			printf("%d + %d = %d 입니다. \n", a, b, c);
			break;
		case '-' : 
			c = a - b;
			printf("%d - %d = %d 입니다. \n", a, b, c);
			break;
		case '*' : 
			c = a * b;
			printf("%d * %d = %d 입니다. \n", a, b, c);
			break;
		case '/' : 
			c = a / b;
			printf("%d / %d = %d 입니다. \n", a, b, c);
			break;
		case '%' : 
			c = a % b;
			printf("%d %% %d = %d 입니다. \n", a, b, c);
			break;
		default :
			printf("연산자를 잘못 입력했습니다.\n");
	}
}
