#include <stdio.h>

int my_sum2(int a, int b) { // 변수 선언 시 항상 초기화 시킬 것 .
	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;

	}
	return sum;

}

void main() {
	printf("1부터 4까지의 합 : %d", my_sum2(1, 4));


}