#include <stdio.h>

//Q405.연습: 두 정수를 입력받아서(a, b),
//a부터 b까지의 정수를 모두 합한 결과를 출력.
//(실행결과)두 정수를 입력 : 3 7 (엔터)"%d%d"
//25  			// 3+4+5+6+7

void main() {
	int a, b;
	printf("두 정수를 입력 : ");
	scanf_s("%d%d", &a, &b);

	if (a > b) {		// 이해.
		int temp = a;
		a = b;
		b = temp;
	}

	int sum = 0;
	for (int i = a; i <= b; i++) {
		sum += i;
		printf("%d", i);
		if (i < b) {
			printf("+");
		}
	}
	printf("=%d", sum);
}