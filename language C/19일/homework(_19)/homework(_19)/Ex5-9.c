#include <stdio.h>

// 1~100까지의 수 중 홀수만 더하여 합을 구함
void main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			continue; // 홀수가 아니면 아래의 상황을 모두 스킵
		}
		sum += i;




	}
	printf("1~100의 모든 홀수의 합은 %d이다", sum);


}