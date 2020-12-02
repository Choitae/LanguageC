#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 무한이 반복하면서 이볅된 수가 홀수인지 짝수인지 출력 (-)값이 입력되면 종료

void main() {
	int n; 
	while (1){
		printf("정수 : ");
		scanf("%d", &n);
		if (n < 0)
			break;
		if (n % 2 == 0)
			printf("%d는 짝수이다\n", n);
		else
			printf("%d는 홀수이다\n", n);

	}




}