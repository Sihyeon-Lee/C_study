#include <stdio.h>

void main()
{
	int  year;

	printf("�⵵�� �Է��ϼ���. : ");
	scanf("%d", &year);

	if (( year % 4 == 0 && year != 0 ) || ( year % 400 == 0 ))
	{
		  printf("%d ���� �����Դϴ�.\n", year);
	}
	else
	{
		printf("%d ���� ������ �ƴմϴ�.\n", year);
	}
}