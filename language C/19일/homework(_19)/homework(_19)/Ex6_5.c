#include <stdio.h>
int a = 5; // 전역범수(어떤 함수에도 소속되어 있지 않은 변수). 파라미터는 지역변수의 일종임.

void func(int b) {
	a = 20;
	b = 20;
	printf("a: %d, b : %d\n", a, b);

}

void main() {
	int b;
	a = 10;
	b = 10;
	printf("a: %d, b : %d\n", a, b);
	func(b);
	printf("a: %d, b : %d\n", a, b);



}