#include <stdio.h>

void main() {
	printf("100 이하의 자연수 중 2,3의 배수가 아닌 수:");
	for (int i = 1; i <= 100; i++) {
		if (i % 2 != 0 && i % 3 != 0) {
			printf("%d ", i);
		}
	}

	/*
	int i = 1;
	while (i <= 100) {
		if (i % 2 != 0 && i % 3 != 0) {
			printf("%d ", i);
		}
		i++;
	}
	*/
}