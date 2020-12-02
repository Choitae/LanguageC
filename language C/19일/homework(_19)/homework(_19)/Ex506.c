#include <stdio.h>

//파라미터 + 리턴 하는 함수.

int f(int n) { // 괄호 안에 변수의 선언 --> 파라미터
	n++;
	return n;




}


void main() {
	int num = 2;
	num = f(num);
	printf("num : %d\n", num); // 3(이해)

	num = f(num);
	printf("num : %d\n", num);


}