#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	
//	char str[10] = "Hello";
//	printf("%s", str);
	char s[10];
	int n;

	scanf("%d", &n); // n�� �ּҰ��� �־�� �ϱ� ������ &�� ���.
	scanf("%s", s); // �迭 s ��ü�� �ּҰ��̱� ������ &�� ���� ����

	s[2] = 0; // s�� 3���� �濡 �ι��ڸ� �Է�

	printf("n : %d\n", n);
	printf("s : %s\n", s); // 0�� �ι��ڰ� �ִ� �� ���� ���� ����� �ȴ�.

}

