#include <stdio.h>

//Ex401. if -> switch
//���� �Է�(0 �̻� 29 ������ ���� �Է� ����),
//"0�̻� 10�̸�" / "10�̻� 20�̸�" / "20�̻� 30�̸�"

void main() {
	int input;
	printf("���� �Է� : ");
	scanf_s("%d", &input);    // 0 ~ 29

	input /= 10;     // �Ǵ� input = input / 10;
	
	switch (input) {
	case 0: printf("0�̻� 10�̸�"); break;
	case 1:	printf("10�̻� 20�̸�"); break;
	case 2:	printf("20�̻� 30�̸�"); break;
	default: printf("�̿��� ���� �Է�����!!");
	}

	/*
	input /= 10;     // �Ǵ� input = input / 10;
	if (input == 0) {  
		printf("0�̻� 10�̸�");
	}
	else if (input == 1) {
		printf("10�̻� 20�̸�");
	}
	else if (input == 2) {
		printf("20�̻� 30�̸�");
	}
	*/

	/*
	if (input < 10) {
		printf("0�̻� 10�̸�");
	}
	else if (input < 20) {
		printf("10�̻� 20�̸�");
	}
	else if (input < 30) {
		printf("20�̻� 30�̸�");
	}
	*/
}


