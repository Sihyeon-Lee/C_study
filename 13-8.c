#include <stdio.h>

void main()
{
	enum week { sun, mon, fue, wed, thu, fri, sat };
	enum week ww;
	ww = sat;

	if (ww == sun)
		printf("������ �Ͽ����Դϴ�.\n");
	else
		printf("������ �Ͽ����� �ƴմϴ�.\n");
}
