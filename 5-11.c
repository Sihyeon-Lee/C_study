#include <stdio.h>

void main()
{
	int a, b, c;
	char d;

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &d, &b);

	switch (d)
	{
		case '+' : 
			c = a + b;
			printf("%d + %d = %d �Դϴ�. \n", a, b, c);
			break;
		case '-' : 
			c = a - b;
			printf("%d - %d = %d �Դϴ�. \n", a, b, c);
			break;
		case '*' : 
			c = a * b;
			printf("%d * %d = %d �Դϴ�. \n", a, b, c);
			break;
		case '/' : 
			c = a / b;
			printf("%d / %d = %d �Դϴ�. \n", a, b, c);
			break;
		case '%' : 
			c = a % b;
			printf("%d %% %d = %d �Դϴ�. \n", a, b, c);
			break;
		default :
			printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}
