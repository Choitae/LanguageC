#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int hours, minute;
	printf("시와 분을 입력하세요");
	scanf("%d%d", &hours, &minute);
	
	printf("%d시간 %d분은 분 단위로 %d분입니다", hours, minute, hours*60 + minute);






}