#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a;
	int b;
	int c;
	printf("�� ���ڸ� �Է��ϼ���");
	scanf("%d%d%d", &a, &b, &c);

	if (a == b == c)
		printf("��� ���ڴ� %d %d %d�� �����ϴ� ", a, b, c);
	else if (a > b && b >= c)
		printf("%d �� ���� ũ��", a);
	else if (a > b && b <= c && a >= c)
		printf("%d �� ���� ũ��", a);
	else if (a > b && b <= c && a < c)
		printf("%d �� ���� ũ��", c);
	else if (a <= b && b > c)
		printf("%d �� ���� ũ��", b);
	else 
		printf("%d �� ���� ũ��", c);



}