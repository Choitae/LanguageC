//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	// 문자열 변수 선언.
	char str[31];

	printf("입력 : ");
	gets_s(str, 31);

	printf("출력 : ");
	puts(str);

}