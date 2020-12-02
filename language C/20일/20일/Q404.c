#include <stdio.h>

void main() {
	int n;
	printf("n : ");
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;   // 또는 sum = sum + i;
	}
	// printf("%d", sum);
	// (추가연습:고급) 1 + 2 + 3 + 4 = 10
}



