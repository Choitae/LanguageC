#include <stdio.h>

//평균을 구하는 avg함수 만들기
float avg(int a, int b) {
	float ret;
	ret = (a + b) / 2.0f;
	return ret;

}

void main() {
	int num1, num2;
	printf("두 정수를 입력 : ");
	scanf_s("%d %d", &num1, &num2);

	printf("%d와 %d의 평균 : %.2f\n", num1, num2, avg(num1, num2));



}