#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int score;
	printf("점수를 입력하세요 : ");
	scanf("%d", &score);

	int a = score/10;
	switch (a) {

		case (10):
			printf("학점은 A입니다");
			break;
		case (9):
			printf("학점은 A입니다");
		    break;
		case (8) :
			printf("학점은 B입니다");
			break;
		case (7) :
	        printf("학점은 B입니다");
			break;
		case (6):
			printf("학점은 C입니다");
			break;
		case (5):
			printf("학점은 C입니다");
			break;
		default :
			printf("학점은 F입니다");
			break;
		

	}



}