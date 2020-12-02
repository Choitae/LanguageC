#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int arr[3];

	for (int i = 0; i <= 2; i++) {

		int input;

		printf("정수입력 : ");
		scanf("%d", & input);

		arr[i] = input;

	}

	// 배열을 출력
	int sum = 0;
	for (int i = 0; i <= 2; i++) {
		printf("%d\n", arr[i]);
		sum += arr[i];



	}
	printf("배열의 모든 요소의 합 : %d\n", sum);
}


