#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int arr[3];

	for (int i = 0; i <= 2; i++) {

		int input;

		printf("�����Է� : ");
		scanf("%d", & input);

		arr[i] = input;

	}

	// �迭�� ���
	int sum = 0;
	for (int i = 0; i <= 2; i++) {
		printf("%d\n", arr[i]);
		sum += arr[i];



	}
	printf("�迭�� ��� ����� �� : %d\n", sum);
}


