#include <stdio.h>

// 1~100������ �� �� Ȧ���� ���Ͽ� ���� ����
void main() {
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			continue; // Ȧ���� �ƴϸ� �Ʒ��� ��Ȳ�� ��� ��ŵ
		}
		sum += i;




	}
	printf("1~100�� ��� Ȧ���� ���� %d�̴�", sum);


}