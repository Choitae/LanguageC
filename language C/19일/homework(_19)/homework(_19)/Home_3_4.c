#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int score;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);

	int a = score/10;
	switch (a) {

		case (10):
			printf("������ A�Դϴ�");
			break;
		case (9):
			printf("������ A�Դϴ�");
		    break;
		case (8) :
			printf("������ B�Դϴ�");
			break;
		case (7) :
	        printf("������ B�Դϴ�");
			break;
		case (6):
			printf("������ C�Դϴ�");
			break;
		case (5):
			printf("������ C�Դϴ�");
			break;
		default :
			printf("������ F�Դϴ�");
			break;
		

	}



}