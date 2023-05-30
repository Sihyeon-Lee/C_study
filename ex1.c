#include <stdio.h>

void main() {
	int a, b, c, d; /*첫번째 값은 a, 두번째 값은 b, 세번째 값은 c, 네번째 값은 d로 받음 */

	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);	

	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);	

	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);	

	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &d);	

	printf("%d + %d + %d + %d = %d", a, b, c, d, a+b+c+d);
}
