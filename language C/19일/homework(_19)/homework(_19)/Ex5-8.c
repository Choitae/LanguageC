#include <stdio.h>

void main() {
	/*1���� 4������ ������.
	int sum = 0;
	for (int i = 1; i <= 4; i++) {
		sum = sum + i;



	}
	printf("1���� 4������ �հ� : %d", sum);
	*/

	//���� 200���� Ŀ���� �Ǵ� ���� 1���� ---���� ������ ��.
	int sum = 0, i;
	for ( i = 1; i <= 100; i++) {
		sum = sum + i;
		if (sum > 200)
			break;
	}
	printf("���� 200���� Ŀ���� �Ǵ� ���� 1���� %d���� ������ ��", i);
	printf("(�� : %d)", sum);
}