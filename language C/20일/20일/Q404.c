#include <stdio.h>

void main() {
	int n;
	printf("n : ");
	scanf_s("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i;   // �Ǵ� sum = sum + i;
	}
	// printf("%d", sum);
	// (�߰�����:���) 1 + 2 + 3 + 4 = 10
}



