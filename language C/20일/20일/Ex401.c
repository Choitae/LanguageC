#include <stdio.h>

//Ex401. if -> switch
//정수 입력(0 이상 29 이하의 정수 입력 가정),
//"0이상 10미만" / "10이상 20미만" / "20이상 30미만"

void main() {
	int input;
	printf("정수 입력 : ");
	scanf_s("%d", &input);    // 0 ~ 29

	input /= 10;     // 또는 input = input / 10;
	
	switch (input) {
	case 0: printf("0이상 10미만"); break;
	case 1:	printf("10이상 20미만"); break;
	case 2:	printf("20이상 30미만"); break;
	default: printf("이외의 값을 입력했음!!");
	}

	/*
	input /= 10;     // 또는 input = input / 10;
	if (input == 0) {  
		printf("0이상 10미만");
	}
	else if (input == 1) {
		printf("10이상 20미만");
	}
	else if (input == 2) {
		printf("20이상 30미만");
	}
	*/

	/*
	if (input < 10) {
		printf("0이상 10미만");
	}
	else if (input < 20) {
		printf("10이상 20미만");
	}
	else if (input < 30) {
		printf("20이상 30미만");
	}
	*/
}


