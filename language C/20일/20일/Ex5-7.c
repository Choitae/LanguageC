#include <stdio.h>

// Ex5-7: for문 --> 1부터 100까지의 합을 출력.
void main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum += i;
	}
	printf("1부터 100까지의 합 : %d\n", sum);
}