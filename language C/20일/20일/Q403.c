#include <stdio.h>

void main() {
	int n;

	printf("n : ");
	scanf_s("%d", &n);	// 4 (����)

	int mul = 1;
	for (int i = n; i >= 1; i--) {	// i : n ~ 1
		mul *= i;
	}
	//for (int i = 1; i <= n; i++) {	// i : 1 ~ n
	//	mul *= i;    // �Ǵ� mul = mul * i;
	//}
	printf("%d! = %d", n, mul);
}



