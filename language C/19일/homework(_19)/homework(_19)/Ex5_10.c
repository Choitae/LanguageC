#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// ������ �ݺ��ϸ鼭 �̓ҵ� ���� Ȧ������ ¦������ ��� (-)���� �ԷµǸ� ����

void main() {
	int n; 
	while (1){
		printf("���� : ");
		scanf("%d", &n);
		if (n < 0)
			break;
		if (n % 2 == 0)
			printf("%d�� ¦���̴�\n", n);
		else
			printf("%d�� Ȧ���̴�\n", n);

	}




}