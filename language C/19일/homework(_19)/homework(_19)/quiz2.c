//������ �Է¹ް� 6�� ����� �׸�ŭ ���
// 0�� �Էµɋ����� �ԷµǴ� ������ ���� ���ϱ�
// ���� �Է¹ް� ������ �������� ���
//�Է� ������ �Է¹ް�, �ش� Ƚ����ŭ �ݺ��ϸ鼭 ������ �Է� �޾�, ���� ������ ����� �Ҽ��� �Ѥ��ڸ����� ���; %2.f

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int num ;
	printf("���� �Է� : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		printf("%d ", 6 * i);
	}
	*/
	/*
	int num;
	int sum = 0;
	
	while (1) {
		printf("������ �Է��ϼ��� : ");
		scanf("%d", &num); 
		if (num == 0)
			break;
		sum += num;




	}
	printf("���� : %d", sum);

	*/
	/*
	int num;
	printf("������ �Է� : ");
	scanf("%d", &num);
	for (int i = 9; i > 0; i--) {
		printf("%d * %d = %d\n", num, i, num * i);


	}
	*/
	int score = 0; //�Է� ����
	int num = 0; //����
	float sum = 0;
	printf("�Է� ���� : ");
	scanf("%d", &score);
	for (int i = 1; i <= score; i++) {
		printf("������ �Է� : ");
		scanf("%d", &num);
		sum += num;


	}
	printf("��հ��� : %.2f", sum / score);

}
