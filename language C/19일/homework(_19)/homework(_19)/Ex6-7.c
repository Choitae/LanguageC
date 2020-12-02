#include <stdio.h>

void func2() {
	int sum = 0;
	static int sum2 = 0; //static 정적변수. 딱 1번만 실행됨. 전역변수의 성격을 띈다. 그러나 지역변수와 같이 함수 내에서만 사용된다.

	sum = sum + 10  ;
	sum2 = sum2 + 10;
	printf("sum : %d, sum 2: %d\n", sum, sum2);



}

void main() {

	func2();
	func2();
	func2();

}