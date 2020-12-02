#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a;
	int b;
	int c;
	printf("세 숫자를 입력하세요");
	scanf("%d%d%d", &a, &b, &c);

	if (a == b == c)
		printf("모든 숫자는 %d %d %d로 동일하다 ", a, b, c);
	else if (a > b && b >= c)
		printf("%d 가 가장 크다", a);
	else if (a > b && b <= c && a >= c)
		printf("%d 가 가장 크다", a);
	else if (a > b && b <= c && a < c)
		printf("%d 가 가장 크다", c);
	else if (a <= b && b > c)
		printf("%d 가 가장 크다", b);
	else 
		printf("%d 가 가장 크다", c);



}