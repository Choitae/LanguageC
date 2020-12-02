#include <stdio.h>

// 90점 이상  : A학점.
// ... 60점 이상 : D학점.
// 60점 미만(default)  : F학점.
void main() {
	int a;
	printf("점수 입력 : ");
	scanf_s("%d", &a);

	switch (a / 10) {
	case 10:			// 이해.
	case 9:
		printf("A학점");
		//break;
	case 8:
		printf("B학점");
		//break;
	case 7:
		printf("C학점");
		//break;
	case 6:
		printf("D학점");
		//break;
	default:
		printf("F학점");
	}

}