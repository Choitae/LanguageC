//정수를 입력받고(a), printf("%s임", isEven(a)==1? "짝수" : "홀수");

#include <stdio.h>

int isEven(int num) {
	if (num % 2 == 0) {
		return 1;
	}
	else
		return 0;

	
}

void main() {
	int a;
	printf("정수 입력 : ");
    scanf_s("%d", &a);

	printf("%s임", isEven(a) == 1 ? "짝수" : "홀수");



}